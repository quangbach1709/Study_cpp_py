def so_fibonacci(n):
    #kiem tra gia tri dac biet
    if(n==0 or n==1):
        return True
    #kiem tra voi tat ca co so fibonacci nho hon n
    so1=0
    so2=1
    while(so2<=n):
        if(so2==n):
            return True
        so1,so2=so2,so1+so2

    return False

n=int(input("Nhap so N = "))
if so_fibonacci:
    print("N la so Fibonacci.")
else:
    print("N khong phai so Fibonacci.")    