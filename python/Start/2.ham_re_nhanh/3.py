def calculate_triangle_area(x1, y1, x2, y2, x3, y3):
    area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))
    return area

x1 = float(input("Nhập tọa độ x của điểm A: "))
y1 = float(input("Nhập tọa độ y của điểm A: "))
x2 = float(input("Nhập tọa độ x của điểm B: "))
y2 = float(input("Nhập tọa độ y của điểm B: "))
x3 = float(input("Nhập tọa độ x của điểm C: "))
y3 = float(input("Nhập tọa độ y của điểm C: "))

triangle_area = calculate_triangle_area(x1, y1, x2, y2, x3, y3)
print("Diện tích của tam giác là:", triangle_area)
