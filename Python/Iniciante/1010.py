n = raw_input().split(" ")
y = raw_input().split(" ")

nn = [float(num) for num in n]
print nn

yy = [float(num) for num in y]
print yy

print("VALOR A PAGAR: R$ %.2f" %(nn[1]*nn[2]+yy[1]*yy[2]))
