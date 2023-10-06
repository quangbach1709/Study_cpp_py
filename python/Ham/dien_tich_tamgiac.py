import math


def dien_tich(a,b,c):
    p=0.5*(a+b+c)
    return math.sqrt(p*(p-a)*(p-b)*(p-c))

a=float(input("Nhap do dai canh thu 1:")) 
b=float(input("Nhap do dai canh thu 2:"))
c=float(input("Nhap do dai canh thu 3:"))

print("Dien tich cua tam giac la: ",dien_tich(a,b,c))