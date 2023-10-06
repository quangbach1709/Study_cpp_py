#include<iostream>
#include<math.h>

using namespace std;
//1
int ham_nhap_x_thoa_man(int x,int n)
{
    do
    {
        cout<<"Nhap so nguyen duong x(0<x<"<<n<<"): ";
        cin>>x
    } while (0>n||x>n);

    return x;
  
}

//2
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
void xuat_ra_cac_so_nguyen_to(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (kiem_tra_so_nguyen_to(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}

//3
bool kiem_tra_so_chinh_phuong(int n) 
{
    
    if (sqrt(n) * sqrt(n) == n) 
    {
        return true;
    }
    return false;
}

void xuat_ra_cac_so_chinh_phuong(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (kiem_tra_so_chinh_phuong(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}

//4
bool kiem_tra_so_hoan_chinh(int n)
{
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        
    }
    if (sum==n)
    {
        return true;
    }
    else
        return false;
    
}

void xuat_ra_cac_so_hoan_chinh(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (kiem_tra_so_hoan_chinh(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}

//5
bool kiem_tra_so_Armstrong(int n)
{
    int temp=n,dem_so_phan_tu=0,sum=0;
    while (temp!=0)
    {
        temp/=10;
        dem_so_phan_tu++;
    }

    while (temp!=0)
    {
        int chu_so =temp%10;
        sum+=pow(chu_so,dem_so_phan_tu);
        temp/=10;
    }
    return sum==n;
}

void xuat_ra_cac_so_Armstrong(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (kiem_tra_so_Armstrong(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}

//6
bool kiem_tra_so_doi_xung(int n)
{
    int so_dao_nguoc=0,temp=n;
    while (temp!=0)
    {
        int chu_so =temp%10;
        so_dao_nguoc=so_dao_nguoc*10+chu_so;
        temp/=10;
    }
    return so_dao_nguoc==n;
}

void in_ra_cac_so_doi_xung(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (kiem_tra_so_doi_xung(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}

int main()
{
    int n;
    cout<<"Nhap vao so nguyen duong n: ";
    cin>>n;
    
}