#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<int>& arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Nhap phan tu: ";
        cin >> x;
        arr.push_back(x);
    }
    
}

void xuat(vector<int> arr)
{
    cout << "In danh sach:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << " " << arr[i];
    }
    
}

void xoa_cuoi(vector<int>& arr)
{
    cout << "\nHay xoa phan tu o cuoi danh sach!" << endl;
    arr.erase(arr.end() - 1); // Cập nhật kích thước của danh sách
    xuat(arr);
}

void add_dau(vector<int>& arr, int x)
{
    cout << "Hay them x vao dau danh sach!" << endl;
    arr.insert(arr.begin(), x);
    xuat(arr);
}

void so_chan(vector<int>& arr)
{
    cout << "\nIn so chan trong danh sach:";
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << " " << arr[i];
        }
        
    }
    
}

int main()
{
    int n;
    do
    {
        cout << "Cho n = ";
        cin >> n;
    } while (n < 5);
    vector<int> arr;
    nhap(arr, n);
    xuat(arr);
    xoa_cuoi(arr);
    
    int x;
    cout << "\nCho x = ";
    cin >> x;
    add_dau(arr, x); // Bạn cần nhập giá trị của x trước khi gọi hàm
    so_chan(arr);

    return 0;
}
