n=int(input('N = '))
tong=0
can=0
for i in range(1,n+1):
    can+=i
    tong+=i/can**0.5

print('F({}) ='.format(n),round(tong,7))