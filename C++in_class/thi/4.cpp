#include <iostream>
#include <string>

using namespace std;

struct SinhVien {
    string ma_sv;
    string ten;
    int nam_sinh;
    SinhVien* next;
};

// Hàm thêm sinh viên vào cuối danh sách liên kết
void themSinhVienCuoiDanhSach(SinhVien*& head, string ma_sv, string ten, int nam_sinh) {
    SinhVien* newSV = new SinhVien;
    newSV->ma_sv = ma_sv;
    newSV->ten = ten;
    newSV->nam_sinh = nam_sinh;
    newSV->next = nullptr;

    if (head == nullptr) {
        head = newSV;
        return;
    }

    SinhVien* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newSV;
}

// Hàm thêm sinh viên vào đầu danh sách liên kết
void themSinhVienDauDanhSach(SinhVien*& head, string ma_sv, string ten, int nam_sinh) {
    SinhVien* newSV = new SinhVien;
    newSV->ma_sv = ma_sv;
    newSV->ten = ten;
    newSV->nam_sinh = nam_sinh;
    newSV->next = head;
    head = newSV;
}

// Hàm in danh sách sinh viên
void inDanhSachSinhVien(SinhVien* head) {
    cout << "Hien thi danh sach: " << endl;
    SinhVien* temp = head;
    while (temp != nullptr) {
        cout << temp->ma_sv << "\t" << temp->ten << "\t" << temp->nam_sinh << endl;
        temp = temp->next;
    }
}

// Hàm nhập thông tin sinh viên từ người dùng và thêm vào cuối danh sách
void nhapSinhVienCuoiDanhSach(SinhVien*& head) {
    while (true) {
        string ma_sv, ten;
        int nam_sinh;

        cout << "Nhap MaSV: ";
        getline(cin, ma_sv);

        if (ma_sv.empty()) {
            break; // Thoát khỏi vòng lặp khi nhập mã SV rỗng
        }

        cout << "Nhap ten: ";
        getline(cin, ten);

        cout << "Nam sinh: ";
        cin >> nam_sinh;

        cin.ignore(); // Đọc bỏ kí tự newline từ bước trước

        themSinhVienCuoiDanhSach(head, ma_sv, ten, nam_sinh);
    }
}

// Hàm nhập thông tin sinh viên từ người dùng và thêm vào đầu danh sách
void nhapThemSinhVienDauDanhSach(SinhVien*& head) {
    string ma_sv, ten;
    int nam_sinh;

    cout << "Nhap MaSV: ";
    getline(cin, ma_sv);

    if (!ma_sv.empty()) {
        cout << "Nhap ten: ";
        getline(cin, ten);

        cout << "Nam sinh: ";
        cin >> nam_sinh;

        cin.ignore(); // Đọc bỏ kí tự newline từ bước trước

        themSinhVienDauDanhSach(head, ma_sv, ten, nam_sinh);
    }
}

int main() {
    SinhVien* head = nullptr;

    nhapSinhVienCuoiDanhSach(head);

    inDanhSachSinhVien(head);

    nhapThemSinhVienDauDanhSach(head);

    inDanhSachSinhVien(head);

    
    while (head != nullptr) {
        SinhVien* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
