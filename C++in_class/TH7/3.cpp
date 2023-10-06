#include<iostream>
#include<string>
#include<vector>

using namespace std;

void nhap(vector<float>&arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        float x;
        cout<<"Nhap so thu "<<i+1<<": ";
        cin>>x;
        arr.push_back(x);
    }
    
}

void xuat(vector<float>arr)
{
    cout<<"Cac phan tu trong day la:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<" "<<arr[i];
    }
    
}

void xuat_chia3(vector<float>arr)
{
    cout<<"Cac phan tu chia het cho 3 la:";
    for (int i = 0; i < arr.size(); i++)
    {
        if (static_cast<int>(arr[i]) % 3 == 0)
        {
            cout<<" "<<arr[i];
        }
        
    }
    
}

bool so_nguyen_to(float n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void dem_in_songuyento(vector<float>arr)
{
    int dem=0;
    cout<<"Cac so nguyen to trong day la:";
    for (int i = 0; i < arr.size(); i++)
    {
        if (so_nguyen_to(arr[i]))
        {
            cout<<" "<<arr[i];
            dem++;
        }
        
    }
    cout<<"\nTong so nguyen to trong day la: "<<dem<<endl;
}

//Kiểm tra DS vừa nhập có là dãy tăng hay không?
void kiem_tra_tang(vector<float>arr)
{
    int dem=0;
    for (int i = 0; i < arr.size()-1; i++)
    {
        if (arr[i]<arr[i+1])
        {
            dem++;
        }
        
    }
    if (dem==arr.size()-1)
    {
        cout<<"Day vua nhap la day tang"<<endl;
    }
    else
    {
        cout<<"Day vua nhap khong la day tang"<<endl;
    }
    
}

void xoa_dau(vector<float>&arr)
{
    arr.erase(arr.begin());
    xuat(arr);
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap so phan tu : ";
        cin>>n;
    } while (n<5);
    vector<float>arr;
    nhap(arr,n);
    xuat(arr);
    xuat_chia3(arr);
    dem_in_songuyento(arr);
    xoa_dau(arr);
    float x;
    cout<<"Nhap so thuc x = ";
    cin>>x;
    arr.push_back(x);
    xuat(arr);
    return 0;
}