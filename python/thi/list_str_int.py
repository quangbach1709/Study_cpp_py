n=int(input('Nhap N: '))
a=[]
b=[]
for i in range(n):
    
    x=input('Nhap gia tri thu {}: '.format(i+1))
    #neu x la so nguyen or so thuc thi them vao a con neu la chuoi thi them vao b
    if x.isdigit() or x.replace('.','').isdigit():
        a.append(float(x))
    else:
        b.append(x)

print('Tong cac phan tu cua A = ',sum(a))
str='-'.join(str(i) for i in b)
print('B =',str)
