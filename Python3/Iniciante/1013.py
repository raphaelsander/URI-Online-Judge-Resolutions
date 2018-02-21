# -*- encoding: utf-8 -*-

ENTRADA = input()

A = int(ENTRADA.split()[0])
B = int(ENTRADA.split()[1])
C = int(ENTRADA.split()[2])

MAIORAB = (A+B+abs(A-B))/2
MAIOR = (MAIORAB+C+abs(MAIORAB-C))/2

print("%d eh o maior" % MAIOR)
