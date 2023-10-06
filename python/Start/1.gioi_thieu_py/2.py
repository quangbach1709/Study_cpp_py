import math
tien = 1e7 # số tiền đầu (10M)
lai = 5.1 / 100 # lãi suất 5.1%
print("Số tiền sau 10 năm:", int(tien * (1 + lai) ** 10))
dich = 5e7 # số tiền đích (50M)
nam = math.log(dich / tien, 1 + lai) # tính theo log
print("Số năm để có ít nhất 50 triệu:", math.ceil(nam))