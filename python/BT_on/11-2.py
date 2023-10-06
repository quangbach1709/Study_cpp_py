def so_fibo(n):
    if n==0 or n==1:
        return True
    so1=0
    so2=1
    while(so2<=n):
        if so2==n:
            return True
        so1,so2=so2,so1+so2

    return False

n=int(input('Nhap so n = '))
max=0
for i in range(n):
    if so_fibo(i):
        if i>max:
            max=i

print('So fibonacci lon nhat nho hon',n,'la',max)