#include<iostream>
#include<math.h>

using namespace std;

void nhap_mang(int n,int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Phan tu thu "<<i+1<<" la: ";
        cin>>a[i];
    }
    
}

void xuat_mang(int n,int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    
}

int tong(int n,int a[])
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    return sum;
}


//tim so chinh phuong
int dem_so_chinh_phuong(int n,int a[])
{
    int x=sqrt(n);
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x*x)
        {
            temp++;
        } 
    }
    return temp;
}

int dem_so_nguyen_to(int n,int a[])
{
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i]%j!=0)
            {
                temp++;
            }
            
        }
        
    }
    return temp;
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap so phan tu n = ";
        cin>>n;
    } while (n<2&&n>20);
    
    int arr[n];
    nhap_mang(n,arr);
    xuat_mang(n,arr);
    
    cout<<"\nTong cua mang la: "<<tong(n,arr)<<endl;
    cout<<"Trung binh cong cua mang la: "<<tong(n,arr)/n<<endl;

    cout<<"Tong so cac so chinh phuong trong mang la: "<<dem_so_chinh_phuong(n,arr)<<endl;
    cout<<"Tong so cac so nguyen to trong mang la: "<<dem_so_nguyen_to(n,arr)<<endl;
    return 0;
}
