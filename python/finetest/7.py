

n=int(input("N = "))
s=0
mau=0
for i in range(1,n+1):
    mau+=i**2
    s+=n/mau

print("F(%d) ="%n,format(s,'.7f'))

