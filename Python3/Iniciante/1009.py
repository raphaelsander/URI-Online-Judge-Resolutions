# -*- coding: utf-8 -*-

NOME = input()
SALARIO_FIXO = float(input())
VENDAS = float(input())

SALARIO_TOTAL = SALARIO_FIXO+(0.15*VENDAS)

print("TOTAL = R$ %.2f" % SALARIO_TOTAL)
