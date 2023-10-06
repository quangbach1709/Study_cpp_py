d=int(input("Nhap ngay: "))
m=int(input("Nhap thang: "))
y=int(input("Nhap nam: "))
nam_nhuan=0
#dieu kien ngay
if d>31 and d<0:
    print("Ngay nhap vao k hop le")
    if m==2 and d>29:
        print("Ngay nhap vao k hop le")
#dieu kien thang
if m<0 and m>12:
    print("Thang nhap vao k hop le")
#dieu kien nam
if y<0:
    print("Nam nhap vao k hop le")

if d<=31:
    #kiem tra nam nhuan
    if y%4==0 and y%400==0:
        nam_nhuan=1
    if m==2 and nam_nhuan==1 and d==29:
        m+=1
        d=1
    elif m==2 and nam_nhuan!=1 and d==28:
        m+=1
        d=1
    elif (d==31) and (m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12):
        m+=1
        d=1
        if m==12:
            m=1
            d=1
            y+=1
    elif (d==30) and (m==4 or m==6 or m==9 or m==11):
        m+=1
        d=1
    else:
        d+=1
print(d/m/y)

    