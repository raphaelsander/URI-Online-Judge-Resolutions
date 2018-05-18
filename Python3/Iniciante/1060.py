# -*- encoding: utf-8 -*-

cont = 0;

for x in range(0, 6):
    y = float(input())
    if (y >= 0):
        cont += 1

print("%d valores positivos" %cont)
