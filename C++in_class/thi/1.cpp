#include<iostream>

using namespace std;

bool so_chinh_phuong(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            return true;
        }
    }
    return false;
}

void nhap(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>arr[i];
    }
    
}

void xuat(int arr[],int n)
{
    cout<<"\nDay so:";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
}

void in_dem_so_chan(int arr[],int n)
{
    int dem=0;
    cout<<"\nSo chan trong day la: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            cout<<" "<<arr[i];
            dem++;
        }
        
    }
    cout<<"\nTong so chan trong day so la: "<<dem<<endl;
}

void in_so_chinh_phuong(int arr[],int n)
{
    cout<<"So chinh phuong trong day la: ";
    for (int i = 0; i < n; i++)
    {
        if (so_chinh_phuong(arr[i]))
        {
            cout<<" "<<arr[i];
        }
        
    }
    
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap n = ";
        cin>>n;
    } while (n<=4 || n>20);
    int arr[n+1];
    nhap(arr,n);
    xuat(arr,n);
    cout<<endl;
    in_dem_so_chan(arr,n);
    cout<<endl;
    in_so_chinh_phuong(arr,n);

    return 0;
}