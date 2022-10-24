import sys

# else if(Right_Shift == 2) begin
#     G = small_E_Mantissa[2];
#     R = small_E_Mantissa[1];
#     S = (small_E_Mantissa[0:0] == 0) ? 0 : 1;
# end
for i in range(2,25,1):
    print("else if(Right_Shift == %d) begin" % i)
    print("\tG = small_E_Mantissa2[%d];" % (i))
    print("\tR = small_E_Mantissa2[%d];" % (i-1))
    print("\tS = ((small_E_Mantissa2[%d:0] == 0) ? 0 : 1);" % (i-2))
    print("end")

# cnt = 0
# queue = []
# for i in range (0, 132, 1):
#     if i % 11 == 0:
#         queue.append("IDLE%d_ST" % (i//11))
#         print("IDLE%d_ST   :   uart_tx_o = 1;" % (i//11))
#     elif i % 11 == 1:
#         queue.append("START%d_ST" % (i//11))
#         print("START%d_ST   :   uart_tx_o = 0;" % (i//11))
#     elif i % 11 == 10:
#         queue.append("STOP%d_ST" % (i//11))
#         print("STOP%d_ST   :   uart_tx_o = 1;" % (i//11))
#     else:
#         queue.append("D%d_ST" % (cnt))
#         print("D%d_ST   :   uart_tx_o = tx_data[%d];" % (cnt, cnt))
#         cnt += 1
#     # D0_ST   :   uart_tx_o = tx_data[0];

# # print(queue)
# print()
# cnt = 0
# for i in range (0, 132, 1):
#     print("localparam    ", end='')
#     if i % 11 == 0:
#         print("IDLE%d_ST   =   %d;" % (i//11, i))
#     elif i % 11 == 1:
#         print("START%d_ST   =   %d;" % (i//11, i))
#     elif i % 11 == 10:
#         print("STOP%d_ST   =   %d;" % (i//11, i))
#     else:
#         print("D%d_ST   =   %d;" % (cnt, i))
#         cnt += 1
#     # D0_ST   :   uart_tx_o = tx_data[0];

# print()
# for i in range (0, 131, 1):
#     print("%s   :   begin" % (queue[i]))
#     print("\tif(clk_cnt == 443) begin")
#     print("\t\tclk_cnt = 0;")
#     print("\t\ttx_state = %s;" % (queue[i+1]))
#     print("\tend")
#     print("\telse begin")
#     print("\t\tclk_cnt = clk_cnt + 1;")
#     print("\t\ttx_state = %s;" % (queue[i]))
#     print("\tend")
#     print("end")


# for i in range(0,16,1):
#     hex_i = hex(i)
#     str_i = str(hex_i)
#     chr_i = str_i[2]
#     print("case \'", chr_i.upper(), "\':", sep='')
#     print("\tput_Byte(top, wave_fp, str(\"", bin(i)[2:].zfill(4), "\"));", sep='')
#     print("\tbreak;",sep='')