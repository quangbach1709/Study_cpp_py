# Khai báo một dictionary để lưu trữ thông tin sinh viên
students = {}

# Nhập thông tin của sinh viên từ bàn phím và thêm vào dictionary
for i in range(3):  # Chúng ta nhập thông tin cho 3 sinh viên để ví dụ
    name = input("Nhập tên của sinh viên {}: ".format(i+1))
    age = int(input("Nhập tuổi của sinh viên {}: ".format(i+1)))
    score = float(input("Nhập điểm số của sinh viên {}: ".format(i+1)))

    # Thêm thông tin của sinh viên vào dictionary
    students[name] = {"tuoi": age, "diem": score}

# In dictionary sau khi thêm thông tin sinh viên
print("\nThông tin sinh viên:")
for name, info in students.items():
    print("Tên:", name)
    print("Tuổi:", info["tuoi"])
    print("Điểm số:", info["diem"])
    print()

