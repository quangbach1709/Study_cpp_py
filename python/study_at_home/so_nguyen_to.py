#kiem tra so nguyen to
def so_nguyen_to(n):
    if n<2:
        return False
    for i in range(2,n):
        if n%i==0:
            return False
    return True


while True:
    n=int(input('Nhap n = '))
    if so_nguyen_to(n):
        print(n,' la so nguyen to.')
    else:
        print(n,'khong la so nguyen to.')
    print('Ban co muon tiep tuc k? (y or n)')
    x=input()
    if x=='n':
        print('Thank !')
        break;
