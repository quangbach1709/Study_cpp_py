n=int(input('Nhap N = '))
tong=0
for i in range(n):
    if i%3==0 or i%5==0:
        tong+=i

print('Dap an la:',tong)