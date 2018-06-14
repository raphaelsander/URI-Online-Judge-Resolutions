# -*- coding: utf-8 -*-

z = 0

for x in range(0, 5):
	y = int(input())
	if y%2 == 0:
		z += 1

print("%d valores pares" % z)
