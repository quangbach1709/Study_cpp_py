def tinh_tong(n):
    sum=0
    while(n>0):
        sum+=n%10
        n//=10
    return sum

n=int(input("Nhap so N = "))
while(n<0):
    n=int(input("Nhap lai so N = "))
print("Tong cac chu so cua N la: ",tinh_tong(n))
