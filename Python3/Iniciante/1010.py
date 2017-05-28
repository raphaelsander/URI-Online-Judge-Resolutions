n = input().split(" ")
y = input().split(" ")

nn = [float(num) for num in n]
yy = [float(num) for num in y]

print("VALOR A PAGAR: R$ %.2f" %(nn[1]*nn[2]+yy[1]*yy[2]))
