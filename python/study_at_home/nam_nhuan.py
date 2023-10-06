def kiem_tra_nam_nhuan(n):
    if (n%4==0 and n%100!=0) or n%400==0:
        return True
    return False

n=int(input('Nhap nam: '))
if kiem_tra_nam_nhuan(n):
    print(n,' la nam nhuan')

else:
    print(n,'Khong phai nam nhuan') 