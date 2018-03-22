# -*- encoding: utf-8 -*-

N = input()

A = float(N.split()[0])
B = float(N.split()[1])
C = float(N.split()[2])

if (A+B<=C or A+C<=B or B+C<=A):
    AREA = ((A+B)*C)/2
    print("Area = %.1f" % AREA)
else:
    PERIMETRO = A+B+C
    print("Perimetro = %.1f" % PERIMETRO)
