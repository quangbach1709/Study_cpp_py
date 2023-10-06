def kiem_tra(s):
    for i in range(len(s)//2):
        if s[i] != s[len(s)-i-1]:
            return False
    return True

while True:
    s=input('Nhap chuoi: ')
    if kiem_tra(s):
        print('Chuoi la chuoi doi xung.')
    else:
        print('Chuoi k phai chuoi doi xung.')

    tmp=input('Ban co muon tiep tuc k(y or n)?')
    if tmp !='y':
        print('Xin cam on')
        break
