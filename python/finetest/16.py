def them_cham_than(s):
    while not s.endswith("!!!"):
        s+='!'
    return s
s=input('Nhap chuoi: ')
new_s=them_cham_than(s)
print('Chuoi sau khi bo sung dau cham than: '+"'"+new_s+"'")