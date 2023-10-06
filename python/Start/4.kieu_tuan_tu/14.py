def calculate_pascal_triangle_row(row):
    pascal_row = [1]
    for i in range(1, row):
        next_value = pascal_row[i - 1] * (row - i) // i
        pascal_row.append(next_value)
    return pascal_row

n = int(input("Nhập n: "))
max_width = len(' '.join(map(str, calculate_pascal_triangle_row(n - 1))))

for row in range(n):
    pascal_row = calculate_pascal_triangle_row(row)
    formatted_row = ' '.join(map(str, pascal_row)).center(max_width)
    print(formatted_row)
