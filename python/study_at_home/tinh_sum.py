def giai_thua(n):
    if n==1:
        return 1
    else:
        return n*giai_thua(n-1)

def sum(m,x):
    if m==1:
        return x
    else:
        return (x**m)/giai_thua(m)+sum(m-1,x)
    
x=int(input('Nhap x = '))
n=int(input('Nhap n = '))

print("S(x,n) = ",sum(n,x))