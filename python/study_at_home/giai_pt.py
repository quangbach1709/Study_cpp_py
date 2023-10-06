import math

a=float(input('Nhap a= '))
b=float(input('Nhap b= '))
c=float(input('Nhap c= '))

denta=b**2-4*a*c

if denta<0:
    print('Phuong trinh vo nghiem')
elif denta==0:
    print('Phuong trinh co 1 nghiem day nhat la: ',(-c/b))
else:
    print('Phuong trinh co 2 nghiem la: ',(-b+math.sqrt(denta))/2*a,' va ',(-b-math.sqrt(denta))/2*a)