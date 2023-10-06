print("Nhap lan luot cac so a,b,c: ")
a=float(input())
b=float(input())
c=float(input())
print("Gia tri thu 3 con lai la:")
max=0
if max<b:
    max=b
    if max==c:
        print(a)
    elif max==a:
        print(c)

elif max<c:
    max=c
    if max==b:
        print(a)
    elif max==a:
        print(b)
elif max<a:
    max=a
    if max==b:
        print(c)
    elif max==c:
        print(b)

print("So lon nhat la: ",max)