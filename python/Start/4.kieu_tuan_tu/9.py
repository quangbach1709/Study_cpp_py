def doi_xung(str):
    for i in range(len(str)//2):
        if str[i]==str[len(str)-i-1]:
            return True
        
    return False

str=input('Nhap chuoi: ')
str=str.lower()
if doi_xung(str):
    print('La chuoi doi xung')
else:
    print('K la chuoi doi xung')
    