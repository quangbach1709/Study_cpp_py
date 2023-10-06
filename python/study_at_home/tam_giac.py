from math import sqrt

a=float(input('Nhap canh thu 1: '))
b=float(input('Nhap canh thu 2: '))
c=float(input('Nhap canh thu 3: '))

while ((a+b)<c  or (a+c)<b or (c+b)<a)and (a>0 and b>0 and c>0):
    a=float(input('Nhap canh thu 1: '))
    b=float(input('Nhap canh thu 2: '))
    c=float(input('Nhap canh thu 3: '))

p=(a+b+c)/2

print('Dien tich cua tam giac la: ',sqrt(p*(p-a)*(p-b)*(p-c)))
