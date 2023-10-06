def kiem_tra_cham_than(s):
    while not s.endswith("!!!"):
        s+='!'

    return s

s=input('Nhap S: ')
new_s=kiem_tra_cham_than(s)
print('Chuoi S sau khi xu ly:',new_s)