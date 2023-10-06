#include<iostream>
#include<math.h>

using namespace std;

void doi_vi_tri(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}

int uoc_chung_lon_nhat(int a,int b)
{
    while (b!=0)
    {
        int temp = b;
        b=a%b;
        a=temp;
    }
    return a;  
}

int boi_chung_nho_nhat(int a,int b)
{
    return (a*b)/uoc_chung_lon_nhat(a,b);
}

int tim_s(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i*n;
    }
    return sum;   
}

int main()
{
    int a,b,n;
    cout<<"Nhap 2 so nguyen duong a,b: ";
    cin>>a>>b;
    doi_vi_tri(a,b);
    cout<<"Sau khi doi cho: "<<a<<" "<<b<<endl;
    cout<<"Uoc chung lon nhat la: "<<uoc_chung_lon_nhat(a,b)<<endl;
    cout<<"Boi chung nho nhat la: "<<boi_chung_nho_nhat(a,b)<<endl;
    do
    {
        cout<<"Nhap so nguyen duong n<20: ";
        cin>>n;
    } while (n>20);
    cout<<"S = "<<tim_s(n);
    
    return 0;
}