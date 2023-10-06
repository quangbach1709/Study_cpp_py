n=int(input("N = "))
trong=0
sum=0
for i in range(1,n+1):
    trong+=i
    sum+=trong**(1/i)

print("F(%d) ="%n,format(sum,'.7f'))