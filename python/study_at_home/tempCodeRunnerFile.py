#ham chuan hoa chuoi ky tu
def chuan_hoa_chuoi(s):
    s = s.strip()
    s = s.lower()
    s = s.capitalize() #in hoa chu dau tien
    s = s.replace('  ', ' ')
    return s

s = input('Nhap chuoi: ')
print(chuan_hoa_chuoi(s))
