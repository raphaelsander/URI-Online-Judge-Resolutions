# -*- coding: utf-8 -*-

ENTRADA = input()

A = float(ENTRADA.split()[0])
B = float(ENTRADA.split()[1])
C = float(ENTRADA.split()[2])

TRIANGULO_RETANGULO = (A*C)/2
CIRCULO = 3.14159*(C**2)
TRAPEZIO = ((A+B)*C)/2
QUADRADO = B**2
RETANGULO = A*B

print("TRIANGULO: %.3f" % TRIANGULO_RETANGULO)
print("CIRCULO: %.3f" % CIRCULO)
print("TRAPEZIO: %.3f" % TRAPEZIO)
print("QUADRADO: %.3f" % QUADRADO)
print("RETANGULO: %.3f" % RETANGULO)
