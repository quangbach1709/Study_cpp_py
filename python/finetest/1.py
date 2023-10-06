# Nhập số nguyên dương N
N = int(input("N = "))

# Tính giá trị hàm F(N) theo công thức
F = 0 # biến lưu kết quả
S = 0 # biến lưu tổng từ 1 đến i
for i in range(1, N + 1):
    S += i # cập nhật tổng
    F += (S ** 0.5) # cộng vào kết quả căn bậc hai của tổng

# In ra màn hình với độ chính xác 7 số sau dấu phẩy
print("F(%d) ="%N,format(F,'.7f'))

