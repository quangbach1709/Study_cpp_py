arr=[]
while 1:
    x=int(input('Nhap: '))
    if x<0:
        break
    arr.append(x);

print('Day vua nhap la:',*arr)