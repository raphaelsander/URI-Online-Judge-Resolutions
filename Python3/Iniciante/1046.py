# -*- encoding: utf-8 -*-

INPUT = input()

INICIO = int(INPUT.split()[0])
FIM = int(INPUT.split()[1])

if (INICIO >= FIM):
    TEMPO = (FIM + 24 - INICIO)

else:
    TEMPO = FIM - INICIO

print("O JOGO DUROU %d HORA(S)" % TEMPO)
