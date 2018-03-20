# -*- encoding: utf-8 -*-

N = input()

A = float(N.split()[0])
B = float(N.split()[1])
C = float(N.split()[2])

DELTA = ((B**2)-(4*A*C))

if (A <= 0 or DELTA < 0):
    print("Impossivel calcular")
else:
    R1 = ((-B+(DELTA**(1/2)))/(2*A))
    R2 = ((-B-(DELTA**(1/2)))/(2*A))

    print("R1 = %.5f" % R1)
    print("R2 = %.5f" % R2)
