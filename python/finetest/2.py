#xoa dau cham than khoi chuoi
def kiem_tra_cham_than(s):
    return s.replace('!','')


s=input('Nhap S: ')
new_s=kiem_tra_cham_than(s)
print('Chuoi S sau khi loai bo dau cham than:',new_s)
