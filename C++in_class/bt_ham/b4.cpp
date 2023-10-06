#include<iostream>

using namespace std;

bool kiem_tra_so_nguyen_to(int n)
{
    if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;

}

void nhap_mang(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" cua mang: ";
        cin>>arr[i];
    }
    
}

void xuat_mang(int arr[],int n)
{
    cout<<"Cac pha tu cua mang la: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void dua_ra_cac_so_nguyen_to_trong_arr(int arr[],int n)
{
    cout<<"Cac so nguy to trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        if (kiem_tra_so_nguyen_to(i))
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
}

int main()
{
    int arr[50],n;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    nhap_mang(arr,n);
    xuat_mang(arr,n);
    cout<<"\n";dua_ra_cac_so_nguyen_to_trong_arr(arr,n);
    return 0;
}