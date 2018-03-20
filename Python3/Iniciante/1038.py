# -*- encoding: utf-8 -*-

N = input()

COD = int(N.split()[0])
Q = int(N.split()[1])

if (COD == 1):
    print("Total: R$ %.2f" % (Q*4))
elif (COD == 2):
    print("Total: R$ %.2f" % (Q*4.5))
elif (COD == 3):
    print("Total: R$ %.2f" % (Q*5))
elif (COD == 4):
    print("Total: R$ %.2f" % (Q*2))
elif (COD == 5):
    print("Total: R$ %.2f" % (Q*1.5))
