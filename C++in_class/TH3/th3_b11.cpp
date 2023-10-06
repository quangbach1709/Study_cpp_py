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
        return (float)1/(n*(n+1))+tinh_tong(n-1);
    }
}

int main()
{
    int n;
    //nhap n
    cout<<"N = ";
    cin>>n;
    //diu kin cua n
    while (n<0)
    {
        cout<<"Nhap lai N = ";
        cin>>n;
    }

    //ket qua
    cout<<"S = "<<tinh_tong(n);
    return 0;
    
}