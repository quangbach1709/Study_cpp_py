def xu_ly(str):
    vitri=str.find('@gmail.com')
    if vitri==-1:
        return False
    else:
        #neu truoc @ co it nhat 1 ky tu va sau .com khong co ky tu nao
        if vitri>0 and str[vitri+10:]=="":
            return True
        else:
            return False

str=input("Nhap chuoi: ")
if xu_ly(str):
    print("Chuoi la email hop le")
else:
    print("Chuoi khong phai la email hop le") 
