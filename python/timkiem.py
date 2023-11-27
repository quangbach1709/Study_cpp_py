def timKiemToiNhatDauTien(danhSach, dieuKien):
    for phanTu in danhSach:
        if dieuKien(phanTu):
            return phanTu
    return None  # Trả về None nếu không tìm thấy phần tử thỏa mãn điều kiện

# Ví dụ sử dụng: Tìm số chẵn đầu tiên trong danh sách các số nguyên
danhSachSo = [1, 3, 5, 7, 8, 9, 10, 12]
soChan = timKiemToiNhatDauTien(danhSachSo, lambda x: x % 2 == 0)

if soChan is not None:
    print(f"Phan tu so chan dau tien trong danh sach la: {soChan}")
else:
    print("Khong tim thay so chan trong danh sach")
