#dem so chu in hoa trong chuoi
def so_chu_hoa(s):
    count = 0
    for i in s:
        if i.isupper():
            count += 1
    return count

def so_chu_thuong(s):
    dem=0
    for i in s:
        if i.islower():
            dem+=1
    return dem

def so_chu_so(s):
    dem=0
    for i in s:
        if i.isdigit():
            dem+=1
    return dem

def so_khoang_trang(s):
    dem=0
    for i in s:
        if i.isspace():
            dem+=1
    return dem

#dem so ky tu dac biet
def so_ky_tu_dac_biet(s):
    dem=0
    for i in s:
        if not i.isalnum():
            dem+=1
    return dem

#dem so chu cai la nguyen am
def so_nguyen_am(s):
    dem=0
    for i in s:
        if i.lower() in ['a','e','i','o','u']:
            dem+=1
    return dem

#dem so chu cai la phu am
def so_phu_am(s):
    dem=0
    for i in s:
        if i.lower() not in ['a','e','i','o','u']:
            dem+=1
    return dem

s=input('Nhap chuoi: ')

print('So chu in hoa trong chuoi la:',so_chu_hoa(s))
print('So chu in thuong trong chuoi la:',so_chu_thuong(s))
print('So chu so trong chuoi la:',so_chu_so(s))
print('So ky tu dac biet trong chuoi la:',so_ky_tu_dac_biet(s))
print('So khong trang tron chuoi la:',so_khoang_trang(s))
print('So chu cai nguyen am trong chuoi la:',so_nguyen_am(s))
print('So chu cai phu am trong chuoi la:',so_phu_am(s))