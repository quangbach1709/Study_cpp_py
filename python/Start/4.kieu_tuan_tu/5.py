list=[]
while True:
    x=input('Nhap chuoi: ')
    if x=='':
        break
    list.append(x)
max=list[0]
for i in list:
    if len(i)>=len(max):
        max=i

print('Chuoi dai nhat la:',max)