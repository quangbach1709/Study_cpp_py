diem=float(input("Nhap diem: "))
while diem<0:
    diem=float(input("Nhap lai diem: "))

if diem<3.5:
    print("Loai Yeu")
elif diem <5:
    print("Loai kem")
elif diem<6.5:
    print("Loai trung binh")
elif diem<8:
    print("Loai kha")
elif diem<9:
    print("Loai gioi")
elif diem>9 and diem<=10:
    print("Loai xuat xac")
        