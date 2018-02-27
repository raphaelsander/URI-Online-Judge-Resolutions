# -*- coding: utf-8 -*-

X1Y1 = input()
X2Y2 = input()

X1 = float(X1Y1.split()[0])
Y1 = float(X1Y1.split()[1])
X2 = float(X2Y2.split()[0])
Y2 = float(X2Y2.split()[1])

DISTANCIA = (((X2-X1)**2)+((Y2-Y1)**2))**(1/2)

print("%.4f" % DISTANCIA)
