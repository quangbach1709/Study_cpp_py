def giai_thua(n):
    if n==1:
        return 1
    else:
        return n*giai_thua(n-1)

def tong(n):
    #tong cac giai thua tu 1! den n!
    if n==1:
        return 1
    else:
        return giai_thua(n)+tong(n-1)


n=int(input("Nhap n: "))
while n<1:
    n=int(input("Nhap lai n: "))
print("F(N) = ",tong(n))


