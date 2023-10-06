str=input('Nhap chuoi: ')
new=''
for i in str:
    if not i.isdigit():
        new+=i

print('Chuoi sau khi xu ly la:',new)