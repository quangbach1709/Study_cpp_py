#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void nhap(vector<int>&arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"So thu "<<i<<": ";
        cin>>x;
        arr.push_back(x);
    }
    
}

void xuat(vector<int>arr)
{
    cout<<"\nDay so:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void nguoc(vector<int>arr)
{
    cout<<"\nDao nguoc day so:";
    for (int i = arr.size()-1; i > -1; i--)
    {
        cout<<" "<<arr[i];
    }
    
}

void chia_3(vector<int>arr)
{
    int dem=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]%3==0)
        {
            dem++;
        }
        
    }
    cout<<"\nDay co "<<dem<<" so chia het cho 3.";
}

bool so_chinh_phuong(int n)
{
    if (sqrt(n) * sqrt(n) == n)
    {
        return true;
    }
    return false;
}

void dem_chinh_phuong(vector<int>arr)
{
    int dem=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (so_chinh_phuong(arr[i]))
        {
            dem++;
        }
        
    }
    cout<<"\nDay co "<<dem<<" so chinh phuong.";
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap n = ";
        cin>>n;
    } while (n<=0);
    vector<int>arr;
    nhap(arr,n);
    xuat(arr);
    nguoc(arr);
    chia_3(arr);
    dem_chinh_phuong(arr);

    return 0;
}