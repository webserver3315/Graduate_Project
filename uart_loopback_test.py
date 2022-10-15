'''
    참고: https://developer-mistive.tistory.com/37
    RS-232 2번핀 및 3번핀을 점프케이블로 묶을 것
'''

import serial

ser = serial.Serial("COM5", 115200, timeout = 1)
while True:
    print("insert op :", end=' ')
    input()
    op = input()
    ser.write(op.encode())
    print("R: ", ser.readline())
    # print("R: ", ser.read(size=1))

    if op is 'q':
        ser.close()