from random import randrange
dem=0
while True:
    x=randrange(1,100)
    while True:
        n=int(input('Nhap so du doan: '))
        if n<x:
            print('So ban nhap be hon so can tim.')
        elif n>x:
            print('So ban nhap lon hon so can tim.')
        else:
            print('Chuc mung ban da chien thang.')
            break
        dem+=1
        if dem==7:
            print('Ban da nhap qua 7 lan.')
            break
    m=input('Ban co muon tiep tuc k? (y or n)')
    if m=='n':
        print('Cam on ban da choi')
        break
    
    
    

    