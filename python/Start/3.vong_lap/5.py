def ucll(a,b):
    while b:
        a,b=b,a%b
    return a

def bcnn(a,b):
    return a*b//ucll(a,b)

def ucll_list(arr):
    tmp=arr[0]
    for i in arr[1:]:
        tmp=ucll(tmp,i)
    return tmp

def bcnn_list(arr):
    tmp=arr[0]
    for i in arr[1:]:
        tmp=bcnn(tmp,i)
    return tmp

arr=[]
while 1:
    x=int(input('Nhap list: '))
    if x<=0:
        break
    arr.append(x)

print('UCLL cua list:',ucll_list(arr))
print('BCNN cua list:',bcnn_list(arr))