# -*- encoding: utf-8 -*-

N = input()

N1 = int(N.split()[0])
N2 = int(N.split()[1])
N3 = int(N.split()[2])

if (N1<N2 and N1<N3):
    print(N1)
    if (N2<N3):
        print(N2)
        print(N3)
    else:
        print(N3)
        print(N2)
elif (N2<N1 and N2<N3):
    print(N2)
    if (N1<N3):
        print(N1)
        print(N3)
    else:
        print(N3)
        print(N1)
else:
    print(N3)
    if (N1<N2):
        print(N1)
        print(N2)
    else:
        print(N2)
        print(N1)

print("")
print(N1)
print(N2)
print(N3)
