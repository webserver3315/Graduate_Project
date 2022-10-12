import sys

# for i in range(0,8,1):
#     print("G%d, " % (i), end='')
# print("")
# for i in range(0,8,1):
#     print("P%d, " % (i), end='')

# print("")

# for i in range(3,8,1):
    # print("G%d_%d, " % (i,i-3), end='')
# print("")
# for i in range(3,8,1):
#     print("P%d_%d, " % (i,i-3), end='')

# for i in range(46, -1, -1):
#     print("else if(tmp[%d]) begin" % i, end='')
#     print("")
#     print("ret = 6'd%d;" % i, end='')
#     print("")
#     print("end")

# for i in range(23, -1, -1):
#     print("else if(tmp[%d]) begin" % i, end='')
#     print("")
#     print("\tret = 8'd%d;" % (23 - i), end='')
#     print("")
#     print("end")

cnt = 0
queue = []
for i in range (0, 44, 1):
    if i % 11 == 0:
        queue.append("IDLE%d_ST" % (i//11))
        print("IDLE%d_ST   :   uart_tx_o = 1;" % (i//11))
    elif i % 11 == 1:
        queue.append("START%d_ST" % (i//11))
        print("START%d_ST   :   uart_tx_o = 0;" % (i//11))
    elif i % 11 == 10:
        queue.append("STOP%d_ST" % (i//11))
        print("STOP%d_ST   :   uart_tx_o = 1;" % (i//11))
    else:
        queue.append("D%d_ST" % (cnt))
        print("D%d_ST   :   uart_tx_o = tx_data[%d];" % (cnt, cnt))
        cnt += 1
    # D0_ST   :   uart_tx_o = tx_data[0];

# print(queue)
cnt = 0
for i in range (0, 44, 1):
    print("parameter    ", end='')
    if i % 11 == 0:
        print("IDLE%d_ST   =   %d," % (i//11, i))
    elif i % 11 == 1:
        print("START%d_ST   =   %d," % (i//11, i))
    elif i % 11 == 10:
        print("STOP%d_ST   =   %d," % (i//11, i))
    else:
        print("D%d_ST   =   %d," % (cnt, i))
        cnt += 1
    # D0_ST   :   uart_tx_o = tx_data[0];

for i in range (0, 44, 1):
    print("%s   :   tx_state = %s;" % (queue[i],queue[i+1]))

# D1_ST   :   tx_state = D2_ST;
# D2_ST   :   tx_state = D3_ST;
# D3_ST   :   tx_state = D4_ST;
# D4_ST   :   tx_state = D5_ST;
# D5_ST   :   tx_state = D6_ST;
# D6_ST   :   tx_state = D7_ST;
# D7_ST   :   tx_state = STOP_ST;
# STOP_ST :   tx_state = IDLE_ST;
# default :   tx_state = START_ST;