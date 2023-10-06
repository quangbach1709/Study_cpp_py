def xu_ly(str):
    while not str.endswith('!!!'):
        str+='!'

    return str

str=input('Nhap chuoi: ')
new_str=xu_ly(str)
print('Chuoi su khi xu ly la:',new_str)