# Nhập 3 số nguyên a, b và c
a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))

# Kiểm tra 3 số a, b, c có phải là 3 cạnh của 1 tam giác hay không

if a + b > c and a + c > b and b + c > a:
    print("Dung la tam giac")
else:
    print("Khong phai tam giac")
