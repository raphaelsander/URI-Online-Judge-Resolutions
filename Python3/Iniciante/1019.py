# -*- encoding: utf-8 -*-

N = int(input())

HORAS = int(N/3600)
N = N - (HORAS * 3600)
MINUTOS = int(N/60)
SEGUNDOS = int(N - (MINUTOS * 60))

print("%d:%d:%d" %(HORAS, MINUTOS, SEGUNDOS))
