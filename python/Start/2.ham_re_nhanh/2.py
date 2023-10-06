def canh(a,b,c):
    if (a+b>c and a+c>b and b+c>a):
        return True
    
    return False

a=float(input('a = '))
b=float(input('b = '))
c=float(input('c = '))

if canh(a,b,c):
    p=(a+b+c)/2
    s=(p*(p-a)*(p-b)*(p-c))**0.5
    print('S =',round(s,3))