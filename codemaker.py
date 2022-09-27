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

for i in range(46, -1, -1):
    print("else if(tmp[%d]) begin" % i, end='')
    print("")
    print("ret = 6'd%d;" % i, end='')
    print("")
    print("end")