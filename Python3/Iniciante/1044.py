# -*- encoding: utf-8 -*-

N = input()

A = int(N.split()[0])
B = int(N.split()[1])

if (B%A==0 or A%B==0):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
