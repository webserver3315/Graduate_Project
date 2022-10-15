from cgi import test
from typing import ByteString
from serial import Serial

ser = Serial('COM5', 115200, timeout = 1)
# ser = Serial('dev/ttyS5', 115200)

'''
    루프백시 참고사항
    참고: https://developer-mistive.tistory.com/37
    RS-232 2번핀 및 3번핀을 점프케이블로 묶을 것
'''
def test_loopback():        
    while True:
        if(ser.readable()):
            # result = ser.readline()
            input()
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

def test_fpga():
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
            byte_string = b'AAAABBBBCCCC'
            print("byte_string type : ", type(byte_string))
            print("Sent ", byte_string)
            ser.write(byte_string)

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
test_TX()
# test_fpga()
# test_loopback()
