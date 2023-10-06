#include <iostream>
using namespace std;

int main()
{
    // Khai báo biến kiểu số nguyên
    int N;

    // Nhập số kWh sử dụng trong tháng từ bàn phím
    cout << "N = ";
    cin >> N;

    // Biến để lưu số tiền phải đóng
    int tien = 0;

    // Tính số tiền theo các bậc
    if (N > 0) // Nếu N lớn hơn 0
    {
        if (N <= 50) // Nếu N nhỏ hơn hoặc bằng 50
        {
            tien = N * 1484; // Tính theo bậc 1
        }
        else // Ngược lại
        {
            tien = 50 * 1484; // Tính theo bậc 1 cho 50 kWh đầu tiên
            N = N - 50; // Trừ đi 50 kWh đã tính

            if (N <= 50) // Nếu N còn lại nhỏ hơn hoặc bằng 50
            {
                tien = tien + N * 1533; // Tính theo bậc 2
            }
            else // Ngược lại
            {
                tien = tien + 50 * 1533; // Tính theo bậc 2 cho 50 kWh tiếp theo
                N = N - 50; // Trừ đi 50 kWh đã tính

                if (N <= 100) // Nếu N còn lại nhỏ hơn hoặc bằng 100
                {
                    tien = tien + N * 1786; // Tính theo bậc 3
                }
                else // Ngược lại
                {
                    tien = tien + 100 * 1786; // Tính theo bậc 3 cho 100 kWh tiếp theo
                    N = N - 100; // Trừ đi 100 kWh đã tính

                    if (N <= 100) // Nếu N còn lại nhỏ hơn hoặc bằng 100
                    {
                        tien = tien + N * 2242; // Tính theo bậc 4
                    }
                    else // Ngược lại
                    {
                        tien = tien + 100 * 2242; // Tính theo bậc 4 cho 100 kWh tiếp theo
                        N = N - 100; // Trừ đi 100 kWh đã tính

                        if (N <= 100) // Nếu N còn lại nhỏ hơn hoặc bằng 100
                        {
                            tien = tien + N * 2503; // Tính theo bậc 5
                        }
                        else // Ngược lại
                        {
                            tien = tien + 100 * 2503; // Tính theo bậc 5 cho 100 kWh tiếp theo
                            N = N - 100; // Trừ đi 100 kWh đã tính

                            tien = tien + N * 2587; // Tính theo bậc 6 cho số kWh còn lại
                        }
                    }
                }
            }
        }
    }

    // In kết quả ra màn hình
    cout << "So tien phai nop: " << tien << endl;

    return 0;
}
