n = int(input("Nhap N duong: "))

# Tạo một mảng để lưu trữ các giai thừa đã tính
factorials = [1] * (n+1)

# Tính giai thừa và tích tổng các giai thừa
tong = 0
for i in range(1, n+1):
    factorials[i] = factorials[i-1] * i
    tong += factorials[i]

print("F(%d) =" % n, tong)
