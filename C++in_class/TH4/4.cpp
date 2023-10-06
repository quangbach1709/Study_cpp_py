#include <iostream>

void nhap_mang(int &n, float arr[]);
void xuat_mang(int n, float arr[]);
void su_ly_mang_lon_hon_x(int x, int &n, float arr[]);
void su_ly_mang_nho_hon_x(int x, int &n, float arr[]);

int main()
{
    int n, x;
    do
    {
        std::cout << "Nhap n = ";
        std::cin >> n;
    } while (n < 0);

    float arr[n];
    nhap_mang(n, arr);

    std::cout << "Nhap x = ";
    std::cin >> x;

    std::cout << "Mang chua phan tu lon hon x la: ";
    su_ly_mang_lon_hon_x(x, n, arr);
    std::cout << std::endl;

    std::cout << "Mang chua phan tu nho hon x la: ";
    su_ly_mang_nho_hon_x(x, n, arr);
    std::cout << std::endl;

    return 0;
}

void nhap_mang(int &n, float arr[])
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Phan tu thu " << i + 1 << " la: ";
        std::cin >> arr[i];
    }
}

void xuat_mang(int n, float arr[])
{
    for (int i = 0; i < n; i++)
    {
        std::cout << " " << arr[i];
    }
}

void su_ly_mang_lon_hon_x(int x, int &n, float arr[])
{
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            arr[tmp] = arr[i];
            tmp++;
        }
    }
    n = tmp;
    arr[n] = -1; // Đánh dấu kết thúc mảng
    xuat_mang(n, arr);
}

void su_ly_mang_nho_hon_x(int x, int &n, float arr[])
{
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            arr[tmp] = arr[i];
            tmp++;
        }
    }
    n = tmp;
    arr[n] = -1; // Đánh dấu kết thúc mảng
    xuat_mang(n, arr);
}
