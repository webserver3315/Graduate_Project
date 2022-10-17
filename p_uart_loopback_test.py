'''
    참고: https://developer-mistive.tistory.com/37
    RS-232 2번핀 및 3번핀을 점프케이블로 묶을 것
'''

import serial

ser = serial.Serial("COM5", 115200, timeout = 1)
newfile = open("output.bin", "wb")

def TryWrite(ser, byte_string):
    # print("byte_string type : ", type(byte_string))
    print("Sent ", byte_string)
    ser.write(byte_string)
    time.sleep(3)
    print("Sleep 3sec Completed")

def TryRead(ser):
    result = ser.read(size=4)
    print("result type : ", type(result))
    result_hex = result.hex()
    print("Read : 0x", result)
    print("Read hexa: 0x", result_hex)

    newfile.write(result)
    newfile.flush()
    print(result)

while True:
    input()
    op = input()
    ser.write(op.encode())
    print("R: ", ser.readline())
    # print("R: ", ser.read(size=1))

    if op is 'q':
        ser.close()