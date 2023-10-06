#ham chuan hoa chuoi ky tu
def chuan_hoa_chuoi(s):
    s = s.strip()
    s = s.lower()
    s = s.replace('  ', ' ')
    #in hoa chu cai dau tien sau dau cach
    s = s.title()
    return s

s = input('Nhap chuoi: ')
print(chuan_hoa_chuoi(s))
