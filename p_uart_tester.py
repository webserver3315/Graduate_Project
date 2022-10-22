from cgi import test
from typing import ByteString
import weakref
from serial import Serial
import time

ser = Serial('COM5', 9600, timeout = 0)
newfile = open("output.bin", "wb")
# ser = Serial('dev/ttyS5', 115200)

def TryWrite_Bytewise(ser, one_byte_hex_string):
    assert(len(one_byte_hex_string) == 2)
    one_byte = bytes.fromhex(one_byte_hex_string)
    print("Sent one_byte_hex_string(%s)" % one_byte_hex_string)
    print("One_byte: ",one_byte)
    ser.write(one_byte)

def TryWrite(ser, four_byte_hex_string):
    # print("four_byte_hex_string type : ", type(four_byte_hex_string))
    assert(len(four_byte_hex_string) == 8)
    TryWrite_Bytewise(ser, four_byte_hex_string[6:8])
    time.sleep(0.1)
    TryWrite_Bytewise(ser, four_byte_hex_string[4:6])
    time.sleep(0.1)
    TryWrite_Bytewise(ser, four_byte_hex_string[2:4])
    time.sleep(0.1)
    TryWrite_Bytewise(ser, four_byte_hex_string[0:2])
    time.sleep(0.1)
    print("Sent ", four_byte_hex_string)

def TryRead(ser, bytelen):
    list = []
    for i in range(0,bytelen,1):
        result = ser.read(size=1)
        result_hex = result.hex()
        list.append(result_hex)
    time.sleep(0.5)
    list.reverse()
    print("Read list is ", list)
    # print("Read : 0x", result)
    # print("Read hexa: 0x", result_hex)

    # newfile.write(result)
    # newfile.flush()
    # print(result)

def alpha_bravo_acc(alpha, bravo, acc):
    hexstring = acc + bravo + alpha;
    return hexstring

def test_05_75_00():
    while True:
        if(ser.readable()):
            arg = input()        
            '''
            alpha[31:0] = input[31:0]
            bravo[31:0] = input[63:32]
            acc[31:0] = input[95:64]

            ex)
            A: 0xBF000000
            B: 0x3F400000
            C: 0x00000000
            then
            0x 00000000_3F400000_BF000000
            '''
            if arg == 'r':
                alpha = "00000000"
                bravo = "00000000"
                acc = "00000000"                
                TryWrite(ser, alpha)
                TryWrite(ser, bravo)
                TryWrite(ser, acc)
                TryRead(ser,12)
            elif arg == 'z':
                alpha = "00000000"
                bravo = "00000000"
                acc = "00000000"
                TryWrite(ser, alpha)
                TryWrite(ser, bravo)
                TryWrite(ser, acc)
                TryRead(ser,12)
            elif arg == 'p':            
                alpha = "00000000"
                bravo = "00000000"
                acc = "00100000"
                TryWrite(ser, alpha)
                TryWrite(ser, bravo)
                TryWrite(ser, acc)
                TryRead(ser,12)
            elif arg == 'b':
                tmp = input()
                # b_tmp = bytes.fromhex(tmp)
                # print("b_tmp: ", b_tmp)
                for i in range (0,12,1):
                    TryWrite_Bytewise(ser, tmp)
                    time.sleep(0.1)
                    TryRead(ser, 12)
            elif arg == 'aa':
                alpha = "BF000000"
                bravo = "3F400000"
                acc = "00000000"
                TryWrite(ser, alpha)
                TryWrite(ser, bravo)
                TryWrite(ser, acc)
                TryRead(ser,12)
                #0xbec00000
            elif arg == 'bb':
                alpha = "3F000000"
                bravo = "3EE00000"
                acc = "00000000"
                TryWrite(ser, alpha)
                TryWrite(ser, bravo)
                TryWrite(ser, acc)
                TryRead(ser,12)
                # 0x3e600000
            elif arg == 'bytewise':
                print("'Bytewise Selected")
                alpha = "3F000000"
                bravo = "3EE00000"
                acc = "00000000"
                TryWrite(ser, alpha)
                TryWrite(ser, bravo)
                TryWrite(ser, acc)
                TryRead(ser,12)
            elif arg == 'get':
                get(ser,'ByteOrder')
            elif arg == 'little':
                set(ser,'ByteOrder', 'littleEndian')
            elif arg == 'big':
                set(ser,'ByteOrder', 'littleEndian')
            else:
                print("Skipped")

test_05_75_00()

# test_TX()
# test_RXTX()
# test_loopback()

def test_RXTX():
    # print("Read hexa: 0x", result_hex, " == ", result.decode("utf-8"))
    # print(type(result_hex)) # str

    # result = ser.read(size=4)
    # print(type(result)) # bytes

    # print("Read: ", result.decode('utf-8')[:len(result)-1])
    # print("Read: ", result, " == ", result.hex())

    while True:
        if(ser.readable()):
            # result = ser.readline()

            input()
            TryRead(ser,12)

            input()
            TryWrite(ser, b'C')
            TryRead(ser,12)

            input()
            TryWrite(ser, b'BBBB')
            TryRead(ser,12)

            input()
            TryWrite(ser, b'AAAA')
            TryRead(ser,12)

            result = ser.read(size=4)
            result_hex = result.hex()
            print("Read hexa: 0x", result_hex)


def test_TX():
    # print("Read hexa: 0x", result_hex, " == ", result.decode("utf-8"))
    # print(type(result_hex)) # str

    # result = ser.read(size=4)
    # print(type(result)) # bytes

    # print("Read: ", result.decode('utf-8')[:len(result)-1])
    # print("Read: ", result, " == ", result.hex())
    while True:
        if(ser.readable()):
            # result = ser.readline()
            input()
            result = ser.read(size=4)
            result_hex = result.hex()
            print("Read hexa: 0x", result_hex)

def test_loopback():        
    while True:
        if(ser.readable()):
            # result = ser.readline()
            input()
            b'\xde\xad\xbe\xef'
            byte_string = b'AAAABBBBCCCC'
            print("byte_string type : ", type(byte_string))
            print("Sent ", byte_string)
            ser.write(byte_string)

            result = ser.read(size=4)
            result_hex = result.hex()
            print("Read hexa: 0x", result_hex)
            
            result = ser.read(size=4)
            result_hex = result.hex()
            print("Read hexa: 0x", result_hex)

            result = ser.read(size=4)
            result_hex = result.hex()
            print("Read hexa: 0x", result_hex)

'''
    루프백시 참고사항
    참고: https://developer-mistive.tistory.com/37
    RS-232 2번핀 및 3번핀을 점프케이블로 묶을 것
'''