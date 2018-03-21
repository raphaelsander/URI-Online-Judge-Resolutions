# -*- encoding: utf-8 -*-

N = input()

N1 = float(N.split()[0])
N2 = float(N.split()[1])
N3 = float(N.split()[2])
N4 = float(N.split()[3])

MEDIA = float("%.2f" % ((N1*0.2)+(N2*0.3)+(N3*0.4)+(N4*0.1)))
print("Media: %.1f" % MEDIA)

if (MEDIA >= 7):
    print("Aluno aprovado.")
elif ((MEDIA>=5) and (MEDIA<7)):
    print("Aluno em exame.")
    EXAME = float(input())
    print("Nota do exame: %.1f" % EXAME)
    if (float((MEDIA+EXAME)/2) < 5):
        print("Aluno reprovado.")
    else:
        print("Aluno aprovado.")
        print("Media final: %.1f" % (float((MEDIA+EXAME)/2)))
else:
    print("Aluno reprovado.")
