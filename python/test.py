# Hàm tìm số nhỏ nhất trong A nhưng không có trong B
def smallest_number_in_A_not_in_B(A, B):
  # Khởi tạo giá trị và vị trí của số nhỏ nhất là None
  min_value = None
  min_index = None

  # Duyệt qua các phần tử của A
  for i in range(len(A)):
    # Nếu phần tử đó không nằm trong B
    if A[i] not in B:
      # Nếu chưa có số nhỏ nhất hoặc phần tử đó nhỏ hơn số nhỏ nhất hiện tại
      if min_value is None or A[i] < min_value:
        # Cập nhật giá trị và vị trí của số nhỏ nhất
        min_value = A[i]
        min_index = i

  # Trả về kết quả
  return min_index

# Nhận hai dãy số từ bàn phím
A = input("Nhập dãy số A: ")
B = input("Nhập dãy số B: ")

# Chuyển hai dãy số thành hai danh sách
A = list(map(int, A.split()))
B = list(map(int, B.split()))

# Tìm số nhỏ nhất trong A nhưng không có trong B
result = smallest_number_in_A_not_in_B(A, B)

# In ra kết quả
if result is None:
  print("không có")
else:
  print(result)
