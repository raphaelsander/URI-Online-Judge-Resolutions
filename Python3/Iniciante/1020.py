# -*- encoding: utf-8 -*-

N = int(input())

ANOS = int(N/365)
N = N - (ANOS * 365)
MESES = int(N/30)
DIAS = N - (MESES * 30)

print("%d ano(s)" % ANOS)
print("%d mes(es)" % MESES)
print("%d dia(s)" % DIAS)
