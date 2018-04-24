# -*- encoding: utf-8 -*-

X = float(input())

if (X>=0 and X<=400):
    NS = X * 1.15
    R = X * 0.15
    P = 15

elif (X>400 and X<=800):
    NS = X * 1.12
    R = X * 0.12
    P = 12

elif (X>800 and X<=1200):
    NS = X * 1.10
    R = X * 0.10
    P = 10

elif (X>1200 and X<= 2000):
    NS = X * 1.07
    R = X * 0.07
    P = 7

else:
    NS = X * 1.04
    R = X * 0.04
    P = 4

print("Novo salario: %.2f" % NS)
print("Reajuste ganho: %.2f" % R)
print("Em percentual: %d %%" % P)
