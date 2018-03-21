# -*- encoding: utf-8 -*-

N = input()

X = float(N.split()[0])
Y = float(N.split()[1])

if (X==0 and Y==0):
    print("Origem")
elif (X==0):
    print("Eixo Y")
elif (Y==0):
    print("Eixo X")
elif (X>0 and Y>0):
    print("Q1")
elif (X<0 and Y>0):
    print("Q2")
elif (X<0 and Y<0):
    print("Q3")
else:
    print("Q4")
