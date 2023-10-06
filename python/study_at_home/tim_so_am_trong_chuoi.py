def find_negative_integers(input_string):
    # Tách chuỗi thành các phần riêng biệt (sử dụng khoảng trắng làm dấu phân tách)
    parts = input_string.split()

    # Lặp qua từng phần trong danh sách các phần tách được
    for part in parts:
        # Sử dụng try...except để xử lý ngoại lệ trong trường hợp không phải là số
        try:
            # Chuyển phần thành số nguyên
            num = int(part)
            # Kiểm tra nếu số là số nguyên âm, in ra
            if num < 0:
                print(num)
        except ValueError:
            # Nếu không phải số, bỏ qua và tiếp tục vòng lặp
            continue

# Test
input_text = input('Nhập vào một chuỗi: ')
find_negative_integers(input_text)
