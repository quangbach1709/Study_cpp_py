#include<iostream>

using namespace std;

void nhap_mang(int &n,int *arr);
void xuat_mang(int &n,int *arr);
void swap(int &a,int &b);
void sap_xep(int &n,int* &arr);

int main()
{
    int n;
    do
    {
        cout<<"Nhap n = ";
        cin>>n;
    } while (n<0||n>10);
    int *arr =new int[n];
    nhap_mang(n,arr);
    sap_xep(n,arr);
    xuat_mang(n,arr);

}

void nhap_mang(int &n,int *arr)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Phan tu thu "<<i+1<<" la: ";
        cin>>arr[i];
    }
    
}

void xuat_mang(int &n,int *arr)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
}

void swap(int &a,int &b)
{
    int tmp =a;
    a=b;
    b=tmp;
}

void sap_xep(int &n,int* &arr)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
        
    }
    
}