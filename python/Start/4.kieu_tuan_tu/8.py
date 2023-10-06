str=input('Nhap day: ')
new=''
for i in str:
    if i.isdigit():
        new+='?'
    else:
        new+=i
    
print(new)