from cgi import test
from typing import ByteString
import weakref
from serial import Serial
import time
import numpy as np

from data import *

ser = Serial('COM5', 115200, timeout = 0)
newfile = open("output.bin", "wb")
waitsec = 0.0001
# ser = Serial('dev/ttyS5', 115200)

VERBOSE = 0

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
        print("four_byte_hex_string type : ", four_byte_hex_string)
    assert(len(four_byte_hex_string) == 8)
    TryWrite_Bytewise(ser, four_byte_hex_string[6:8])
    time.sleep(waitsec)
    TryWrite_Bytewise(ser, four_byte_hex_string[4:6])
    time.sleep(waitsec)
    TryWrite_Bytewise(ser, four_byte_hex_string[2:4])
    time.sleep(waitsec)
    TryWrite_Bytewise(ser, four_byte_hex_string[0:2])
    time.sleep(waitsec)
    if VERBOSE > 3:
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


    # print("Read list is ", list)
    assert(len(ret_string) == 8)
    return ret_string

filter_list_little_endian = []
filter_list_four_byte = []
channel_list_little_endian = []
channel_list_four_byte = []


filter_file = open("filter.txt", "w")
channel_file = open("channel.txt", "w")
def Setting():
    filter_list_little_endian = filter_raw_little_endian.split()
    for i in range(0, 121, 1):
        byte_1st = filter_list_little_endian[i*4] # LSB
        byte_2nd = filter_list_little_endian[i*4+1]
        byte_3rd = filter_list_little_endian[i*4+2]
        byte_4th = filter_list_little_endian[i*4+3] # MSB
        filter_list_four_byte.append(byte_4th + byte_3rd + byte_2nd + byte_1st)
        filter_file.write(str(byte_4th + byte_3rd + byte_2nd + byte_1st) + '\n')

    # print(filter_list_little_endian)
    # print(filter_list_four_byte)

    channel_list_little_endian = channel_raw_little_endian.split()
    for t in range(0, 3025, 1):
        channel_tmp_list_four_byte = []
        for i in range(0, 121, 1):
            byte_1st = channel_list_little_endian[t*121*4 + i*4] # LSB
            byte_2nd = channel_list_little_endian[t*121*4 + i*4 + 1]
            byte_3rd = channel_list_little_endian[t*121*4 + i*4 + 2]
            byte_4th = channel_list_little_endian[t*121*4 + i*4 + 3] # MSB
            channel_tmp_list_four_byte.append(byte_4th + byte_3rd + byte_2nd + byte_1st)
            channel_file.write(str(byte_4th + byte_3rd + byte_2nd + byte_1st) + '\n')
        channel_list_four_byte.append(channel_tmp_list_four_byte)

    np_fil = np.array(filter_list_four_byte)
    np_chl = np.array(channel_list_four_byte)
    # print(np_chl.shape)
    # print(np_fil.shape)

def Codemaker():
    for t in range(0, 3025, 1):
        acc_string = '00000000'
        print("acc.total_int =  0x00", ";")
        for i in range(0, 121, 1):
            print("t: ", t, " i: ", i)
            print("alpha.total_int =  0x", filter_list_four_byte[i], ";", sep='')
            print("bravo.total_int = 0x", channel_list_four_byte[t][i], ";", sep='')
            print("acc.total = alpha.total * bravo.total + acc.total;")
        print("result[", t, "] == ", acc_string)
        print("// t is ", t, sep='')
        print("printf(\"result[%d] is %08x\\n\",", t, ", acc.total_int);", sep='')

def Test():
    for t in range(0, 3025, 1):
        # input("Press Enter to continue: ")
        acc_string = '00000000'
        for i in range(0, 121, 1):
            print("t: ", t, " i: ", i)
            TryWrite(ser, filter_list_four_byte[i])
            time.sleep(waitsec)
            TryWrite(ser, channel_list_four_byte[t][i])
            time.sleep(waitsec)
            TryWrite(ser, acc_string)
            time.sleep(waitsec)

            print("acc: ", acc_string)
            acc_string = TryRead(ser, 8)
            time.sleep(waitsec)
            if VERBOSE > 3:
                print("alpha: ", filter_list_four_byte[i])
                print("bravo: ", channel_list_four_byte[t][i])
                print("result: ", acc_string)
        print("result[", t, "] == ", acc_string)

Setting()
# print(filter_list_four_byte)
# print(channel_list_four_byte)
# Codemaker()

# Test()
