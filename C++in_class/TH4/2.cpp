#include <iostream>

using namespace std;

void nhap_mang(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << " la: ";
        cin >> arr[i];
    }
}

void xuat_mang(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
}

int tim_max(int n, int arr[]) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void so_sanh_x(int x, int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            cout << " " << arr[i];
        }
    }
}

void thao_tac_voi_k(int k, int n, int arr[]) {
    cout << "Phan tu tai vi tri k la: " << arr[k] << endl;

    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    xuat_mang(n, arr);
}

int main() {
    int n, x, k;
    do {
        cout << "Nhap so phan tu n = ";
        cin >> n;
    } while (n <= 0 || n > 10);
    int arr[n];
    nhap_mang(n, arr);
    cout << "Phan tu lon nhat cua day la: " << tim_max(n, arr) << endl;

    cout << "Nhap x = ";
    cin >> x;
    cout << "Cac so lon hon hoac bang x la:";
    so_sanh_x(x, n, arr);
    cout << endl;

    do {
        cout << "Nhap k = ";
        cin >> k;
    } while (k < 0 || k >= n);
    thao_tac_voi_k(k, n, arr);

    return 0;
}
