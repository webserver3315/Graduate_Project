from cgi import test
from typing import ByteString
import weakref
from serial import Serial

ser = Serial('COM5', 115200, timeout = 1)
newfile = open("output.bin", "wb")
# ser = Serial('dev/ttyS5', 115200)

def TryRead(ser):
    result = ser.read(size=4)
    result_hex = result.hex()
    print("Read hexa: 0x", result_hex)

def TryWrite(ser, byte_string):
    print("byte_string type : ", type(byte_string))
    print("Sent ", byte_string)
    ser.write(byte_string)

def alpha_bravo_acc(alpha, bravo, acc):
    hexstring = acc + bravo + alpha;
    return hexstring

def test_05_75_00():
    while True:
        if(ser.readable()):
            input()
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
            alpha = "BF000000"
            bravo = "3F400000"
            acc = "00000000"
            hexstring = alpha_bravo_acc(alpha, bravo, acc)
            print(hexstring)
            bstring = bytes.fromhex(hexstring)
            newfile.write(bstring)
            print(bstring)
            TryWrite(ser, bstring)
            TryRead(ser)
            
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
            TryRead(ser)

            input()
            TryWrite(ser, b'C')
            TryRead(ser)

            input()
            TryWrite(ser, b'BBBB')
            TryRead(ser)

            input()
            TryWrite(ser, b'AAAA')
            TryRead(ser)

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