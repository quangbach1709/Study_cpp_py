#include<iostream>

using namespace std;

//ham tinh tong
float tinh_tong(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return (float)1/n+tinh_tong(n-1);
    }
    
    
}

int main()
{
    int n;
    //nhap n
    cout<<"N = ";
    cin>>n;
    //dieu kien duwong
    while (n<=0)
    {
        cout<<"Nhap lai N = ";
        cin>>n;
    }
    
    //dap an
    cout<<"S = "<<(float)tinh_tong(n);
    return 0;
}