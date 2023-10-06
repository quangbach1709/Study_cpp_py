def nam_nhuan(year):
    if (year%4==0 and year%100!=0)or year%400==0:
        return True
    return False

month=int(input('Nhap thang: '))
while(month<0 or month>12):
    month=int(input('Nhap lai thang: '))

if month==2:
    year=int(input('Nhap nam: '))
    if nam_nhuan(year):
        print('Thang ',month,' co 29 ngay')
    else:
        print('Thang ',month,' co 28 ngay')
elif month in (4,6,9,11):
    print('Thang ',month,' co 30 ngay')
else:
    print('Thang ',month,' co 31 ngay')


