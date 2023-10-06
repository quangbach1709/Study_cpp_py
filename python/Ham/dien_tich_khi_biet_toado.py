import math


def do_dai(x1,y1,x2,y2):
    x=x2-x1
    y=y2-y1
    return math.sqrt(x*x+y*y)

def dien_tich(a,b,c):
    p=0.5*(a+b+c)
    return math.sqrt(p*(p-a)*(p-b)*(p-c))

print("Nhap toa do x,y cua diem A:")
x1=float(input())
y1=float(input())

print("Nhap toa do x,y cua diem B:")
x2=float(input())
y2=float(input())

print("Nhap toa do x,y cua diem C: ")
x3=float(input())
y3=float(input())

print("Dien tich la: ",dien_tich(do_dai(x1,y1,x2,y2),do_dai(x2,y2,x3,y3),do_dai(x3,y3,x1,y1)))
    