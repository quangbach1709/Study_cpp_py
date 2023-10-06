# def input_list_values():
#     N = int(input("Nhap N: "))
#     list_integers = []
#     list_floats = []
#     list_others = []

#     for _ in range(N):
#         value = input("Nhap gia tri thu %d: "%(_+1))

#         if is_integer(value):
#             list_integers.append(int(value))
#         elif is_float(value):
#             list_floats.append(float(value))
#         else:
#             list_others.append(value)

#     return list_integers, list_floats, list_others

# def is_integer(value):
#     if value.lstrip('-').isnumeric():
#         return True
#     return False

# def is_float(value):
#     try:
#         float(value)
#         return True
#     except ValueError:
#         return False

# def main():
#     list_integers, list_floats, list_others = input_list_values()

#     list_integers.sort(reverse=True)
#     list_floats.sort(reverse=True)
#     list_others.sort(reverse=True)

#     print("A =", list_integers)
#     print("B =", list_floats)
#     print("C =", list_others)

# if __name__ == "__main__":
#     main()

def main():
    try:
        n = int(input("Nhap N: "))
        list_a = []  # Danh sách kiểu nguyên
        list_b = []  # Danh sách kiểu thực
        list_c = []  # Danh sách kiểu khác

        for _ in range(n):
            value = input("Nhap gia tri thu %d: " % (_ + 1))
            try:
                if "." in value:  # Kiểm tra xem giá trị có chứa dấu chấm (kiểu thực) hay không
                    list_b.append(float(value))
                else:
                    list_a.append(int(value))
            except ValueError:
                list_c.append(value)

        # Sắp xếp danh sách A theo thứ tự giảm dần
        list_a.sort(reverse=True)
        # Sắp xếp danh sách B theo thứ tự giảm dần
        list_b.sort(reverse=True)
        # Sắp xếp danh sách C theo thứ tự giảm dần
        list_c.sort(reverse=True)

        # In ra màn hình các danh sách đã sắp xếp
        print("A =", list_a)
        print("B =", list_b)
        print("c =", list_c)
    except ValueError:
        print("Số lượng N phải là một số nguyên dương.")

if __name__ == "__main__":
    main()
