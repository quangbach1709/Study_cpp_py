def ucln(a,b):
    while b:
        a,b=b,a%b

    return a

def bcnn(a,b):
    return a*b//ucln(a,b)

a=int(input('a = '))
b=int(input('b = '))

print('UCLN:',ucln(a,b))
print('BCNN:',bcnn(a,b))