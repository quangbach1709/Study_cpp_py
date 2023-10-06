def tong(n):
    total = 0
    giai_thua = 1  # Biến lưu giá trị giai thừa
    for i in range(1, n + 1):
        giai_thua *= i  # Tính giai thừa cho i
        total += giai_thua  # Cộng giai thừa vào tổng
    return total

n = int(input('Nhap n = '))
print(tong(n))