#include<iostream>

using namespace std;

//ham tinh giai thua
int giai_thua(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*giai_thua(n-1);
    }
     
}

//ham tinh tong
float tinh_tong(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (float)1/giai_thua(n)+tinh_tong(n-1);
    }
    
}

int main()
{
    int n;
    //nhap n
    cout<<"N = ";
    cin>>n;
    //dieu kien cua n
    while (n<=0)
    {
        cout<<"Nhap lai N = ";
        cin>>n;
    }
    cout<<"S = "<<tinh_tong(n);
    return 0;
}