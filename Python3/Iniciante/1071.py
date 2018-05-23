# -*- encoding: utf-8 -*-

soma = 0

x = int(input())
y = int(input())

if (x > y):
    for z in range(y+1, x):
        if (z%2 != 0):
            soma += z

else:
    for z in range(x+1, y):
        if (z%2 != 0):
            soma += z

print(soma)
