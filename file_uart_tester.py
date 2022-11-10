from cgi import test
from typing import ByteString
import weakref
from serial import Serial
import time
import numpy as np
import secrets
import struct

from data import *

ser = Serial('COM6', 1200, timeout = 0)
waitsec = 0.01
# ser = Serial('dev/ttyS5', 115200)

VERBOSE = 1

# ex) want to write 0xBF000000: write(00) write(00) write(00) write(BF)
# ex) raw_little endian 56(0th) F9(1th) F2(2th) 3D(3th) => 0x3DF2F956

def TryWrite_Bytewise(ser, one_byte_hex_string):
    assert(len(one_byte_hex_string) == 2)
    one_byte = bytes.fromhex(one_byte_hex_string)
    if VERBOSE > 3:
        print("Sent one_byte_hex_string(%s)" % one_byte_hex_string)
        print("One_byte: ",one_byte)
    ser.write(one_byte)

def TryWrite(ser, four_byte_hex_string):
    if VERBOSE > 3:
        print("four_byte_hex_string: ", type(four_byte_hex_string))
        print("four_byte_hex_string type :\'", four_byte_hex_string, "\'")
        print("four_byte_hex_string length : ", len(four_byte_hex_string))
    assert(len(four_byte_hex_string) == 8)
    TryWrite_Bytewise(ser, four_byte_hex_string[6:8])
    time.sleep(waitsec)
    TryWrite_Bytewise(ser, four_byte_hex_string[4:6])
    time.sleep(waitsec)
    TryWrite_Bytewise(ser, four_byte_hex_string[2:4])
    time.sleep(waitsec)
    TryWrite_Bytewise(ser, four_byte_hex_string[0:2])
    time.sleep(waitsec)
    # four_byte_hex = bytes.fromhex(four_byte_hex_string)
    # four_byte_hex_string2 = four_byte_hex.hex(four_byte_hex)
    # ser.write(four_byte_hex)
    # print(four_byte_hex)
    # print("Sent ", four_byte_hex_string)
    # print("Sent ", four_byte_hex_string2)
    if VERBOSE > 3:
        print(four_byte_hex)
        print("Sent ", four_byte_hex_string)

def TryRead(ser, bytelen):
    list = []
    loop_number=0
    while True:
        loop_number+=1
        for i in range(0,bytelen,1):
            result = ser.read(size=1)
            result_hex = result.hex()
            list.append(result_hex)
        time.sleep(waitsec)
        list.reverse()
        ret_string = ''
        for k in range(0,8,1):
            ret_string = ret_string + list[k] # Make string

        if(len(ret_string) == 8):
            break
        else:
            print("TryRead(%dth): len(ret_string) != 8, thus repeat ", loop_number)
            time.sleep(waitsec*10)
    assert(len(ret_string) == 8)
    return ret_string


alpha_file = open("alpha.txt", "r")
bravo_file = open("bravo.txt", "r")
acc_file = open("acc.txt", "r")
delta_file = open("delta.txt", "w")

charlie_file = open("charlie.txt", "r")

alpha_error = []
bravo_error = []
acc_error = []
delta_error = []
charlie_error = []


def hex_to_float(f):
    return struct.unpack('!f', bytes.fromhex(f))[0]
def float_to_hex(f):
    return hex(struct.unpack('<I', struct.pack('<f', f))[0]).replace("0x","")

def Random_Test():
    err_cnt = 0
    same_cnt = 0
    for i in range(0,100,1): 
        print(i)
        alpha = secrets.token_hex(4)
        bravo = secrets.token_hex(4)
        acc = secrets.token_hex(4)
        # acc = '7f9fffff'
                
        alpha_f = hex_to_float(alpha)
        bravo_f = hex_to_float(bravo)
        acc_f = hex_to_float(acc)
        charlie_f = (alpha_f * bravo_f) + acc_f
        if(charlie_f > 340282346638528859811704183484516925440):
            charlie_f = float('inf')
        elif(charlie_f < -340282346638528859811704183484516925440):
            charlie_f = float('-inf')
        charlie = float_to_hex(charlie_f).zfill(8)

        print("alpha: ", (alpha))
        print("bravo: ", (bravo))
        print("acc: ", (acc))

        TryWrite(ser, alpha)
        TryWrite(ser, bravo)
        TryWrite(ser, acc)
        delta = TryRead(ser, 8)
        print("delta  : \'", (delta), "\'", sep='')
        print("delta_len  : \'", len(delta), "\'",sep='')
        print("charlie  : \'", (charlie), "\'",sep='')
        print("charlie_len: \'", len(charlie), "\'",sep='')

        delta_file.write(delta)
        delta_file.write(" => ")
        if(charlie == delta):
            delta_file.write("SAME\n")
            print(">>>SAME")
            same_cnt += 1
        elif((charlie[0:7] == delta[0:7]) and abs(ord(charlie[7]) - ord(delta[7])) <= 1):
            delta_file.write("SAME BUT NOT ROUNDED\n")
            print(">>>SAME BUT NOT ROUNDED")
            same_cnt += 1
        elif(((charlie[0:2] == "7f" or charlie[0:2] == "ff") and (charlie[2:8] != "000000")) and
                ((delta[0:2] == "7f" or delta[0:2] == "ff") and (delta[2:8] != "000000"))):
            delta_file.write("SAME NaN\n")
            print(">>>SAME NaN")
            same_cnt += 1
        else:
            delta_file.write("ERROR\n")
            print(">>>ERROR")
            alpha_error.append(alpha)
            bravo_error.append(bravo)
            acc_error.append(acc)
            charlie_error.append(charlie)
            delta_error.append(delta)
            err_cnt += 1
        
    print("SAME %d | ERROR %d" %(same_cnt, err_cnt))
    delta_file.write("SAME: " + str(same_cnt))
    delta_file.write(" ")
    delta_file.write("ERROR: " + str(err_cnt) + "\n")
    for i in range(err_cnt):
        print("ERROR %d : " %(i) )
        error_line = "%s * %s + %s = %s != %s\n" %(alpha_error[i], bravo_error[i], acc_error[i], delta_error[i], charlie_error[i])
        print(error_line)
        delta_file.write(error_line)







Random_Test()



def Test():
    err_cnt = 0
    same_cnt = 0
    for i in range(0,100,1): 
        print(i)
        alpha = alpha_file.readline()
        bravo = bravo_file.readline()
        acc = acc_file.readline()
        charlie = charlie_file.readline()

        alpha = alpha.strip()
        bravo = bravo.strip()
        acc = acc.strip()
        charlie = charlie.strip()

        print("alpha: ", (alpha))
        print("bravo: ", (bravo))
        print("acc: ", (acc))

        TryWrite(ser, alpha)
        TryWrite(ser, bravo)
        TryWrite(ser, acc)
        delta = TryRead(ser, 8)
        print("delta  : \'", (delta), "\'", sep='')
        print("delta_len  : \'", len(delta), "\'",sep='')
        print("charlie  : \'", (charlie), "\'",sep='')
        print("charlie_len: \'", len(charlie), "\'",sep='')
        delta_file.write(delta)
        delta_file.write(" => ")
        if(charlie == delta):
            delta_file.write("SAME\n")
            print(">>>SAME")
            same_cnt += 1
        elif(charlie[0:7] == delta[0:7]):
            delta_file.write("SAME BUT NOT ROUNDED\n")
            print(">>>SAME BUT NOT ROUNDED")
            same_cnt += 1
        elif(((charlie[0:2] == "7f" or charlie[0:2] == "ff") and (charlie[2:8] != "000000")) and
                ((delta[0:2] == "7f" or delta[0:2] == "ff") and (delta[2:8] != "000000"))):
            delta_file.write("SAME NaN\n")
            print(">>>SAME NaN")
            same_cnt += 1
        else:
            delta_file.write("ERROR\n")
            print(">>>ERROR")
            alpha_error.append(alpha)
            bravo_error.append(bravo)
            acc_error.append(acc)
            charlie_error.append(charlie)
            delta_error.append(delta)
            err_cnt += 1
        
    print("SAME %d | ERROR %d" %(same_cnt, err_cnt))
    delta_file.write("SAME: " + str(same_cnt))
    delta_file.write(" ")
    delta_file.write("ERROR: " + str(err_cnt) + "\n")
    for i in range(err_cnt):
        print("ERROR %d : " %(i) )
        error_line = "%s * %s + %s = %s != %s\n" %(alpha_error[i], bravo_error[i], acc_error[i], delta_error[i], charlie_error[i])
        print(error_line)
        delta_file.write(error_line)
# Random_Test()

'''
# alpha = secrets.token_hex(4)
# bravo = secrets.token_hex(4)
# acc = secrets.token_hex(4)

alpha = '32fff902'
bravo = '684a481a'
acc = '579478fe'

# alpha = '7f0fffff'
# bravo = '7f0fffff'
# acc = '7f0fffff'

alpha_f = hex_to_float(alpha)
bravo_f = hex_to_float(bravo)
acc_f = hex_to_float(acc)

# hex to float
print(hex_to_float(alpha))
# hex to float
print(float_to_hex(hex_to_float(alpha)))


print(alpha)
print(type(alpha))
print(alpha_f)
print(type(alpha_f))
print()
print(bravo)
print(type(bravo))
print(bravo_f)
print()
print(acc)
print(type(acc))
print(acc_f)
print()

charlie_f = (alpha_f * bravo_f) + acc_f
if(charlie_f > 340282346638528859811704183484516925440):
    charlie_f = float('inf')
elif(charlie_f < -340282346638528859811704183484516925440):
    charlie_f = float('-inf')
print(charlie_f)
print(type(charlie_f))
charlie = float_to_hex(charlie_f)
print(charlie)
print(type(charlie))
print(charlie_f)
'''


