# -*- encoding: utf-8 -*-

N = input()
N1 = float(N.split()[0])
N2 = float(N.split()[1])
N3 = float(N.split()[2])

if (N1>N2 and N1>N3):
    A = N1
    if (N2>N3):
        B = N2
        C = N3
    else:
        B = N3
        C = N2
elif (N2>N1 and N2>N3):
    A = N2
    if (N1>N3):
        B = N1
        C = N3
    else:
        B = N3
        C = N1
else:
    A = N3
    if (N1>N2):
        B = N1
        C = N2
    else:
        B = N2
        C = N1

if (A>=B+C):
    print("NAO FORMA TRIANGULO")
else:
    if ((A*A)==(B*B)+(C*C)):
        print("TRIANGULO RETANGULO")
    if ((A*A)>(B*B)+(C*C)):
        print("TRIANGULO OBTUSANGULO")
    if ((A*A)<(B*B)+(C*C)):
        print("TRIANGULO ACUTANGULO")
    if (A==B and B==C):
        print("TRIANGULO EQUILATERO")
    if ((A==B and B!=C) or (B==C and C!=A) or (C==A and A!=B)):
        print("TRIANGULO ISOSCELES")
