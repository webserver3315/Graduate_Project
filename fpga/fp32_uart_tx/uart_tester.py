from serial import Serial

ser = Serial('COM5', 115200, timeout = 1)
# ser = Serial('dev/ttyS5', 115200)

while True:
    if(ser.readable()):
        # res = ser.readline()
        input()
        # res = ser.read(size=1)
        # res_hex = res.hex()
        # print("Read hexa: 0x", res_hex, " == ", res.decode("utf-8"))
        # print(type(res_hex)) # str
        # print("Read hexa: 0x", res_hex)
        res = ser.read(size=5)
        print(type(res)) # bytes

        # print("Read: ", res.decode('utf-8')[:len(res)-1])
        print("Read: ", res, " == ", res.hex())