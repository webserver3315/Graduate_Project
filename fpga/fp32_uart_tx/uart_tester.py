from serial import Serial

ser = Serial('COM5', 115200, timeout = 1)
# ser = Serial('dev/ttyS5', 115200)

while True:
    if(ser.readable()):
        # res = ser.readline()
        res = ser.read(size=1)
        print(type(res))
        res_hex = res.hex()
        # print("Read: ", res.decode('utf-8')[:len(res)-1])
        print("Read hexa: ", res_hex)