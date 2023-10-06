#include<iostream>

using namespace std;

void nhap_mang(int n,int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap vi tri thu "<<i+1<<" la: ";
        cin>>arr[i];
    }
    
}

void xuat_mang(int n,int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
}

bool kiem_tra_day_tang_dan(int n,int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            return false;
        }
        
    }
    return true;
}

void swap(int a,int b)
{
    int temp =a;
    a=b;
    b=temp;
}

/*void su_ly_mang(int x,int n,int arr[])
{
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<x)
        {
            temp++;
            for (int j = i; j < n-1; j++)
            {
                swap(arr[j],arr[j+1]);
            }
            i--;
        }
        
    }
    n=n-temp;
    xuat_mang(n,arr);
}*/

void su_ly_mang(int x,int n,int arr[])
{
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=x)
        {
            arr[temp]=arr[i];
            temp++;
        }
        
    }
    n=temp;
    xuat_mang(n,arr);
}

int main()
{
    int n,x;
    do
    {
        cout<<"Nhap n = ";
        cin>>n;
    } while (n<0||n>30);
    
    int arr[n];
    nhap_mang(n,arr);

    if (kiem_tra_day_tang_dan)
    {
        cout<<"Day la day tang dan."<<endl;
    }
    else
        cout<<"Day k phai la day tang dan."<<endl;


    cout<<"Nhap x = ";
    cin>>x;
    
    
    su_ly_mang(x,n,arr);

    return 0;
}