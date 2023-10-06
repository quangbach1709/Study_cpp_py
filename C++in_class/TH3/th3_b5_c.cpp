#include<iostream>

using namespace std;
//ham tinh giai thua
int giai_thua(int n)
{
    if (n==0)
    {
        return 1;
    }
    else   
        return n*giai_thua(n-2);
    
}

int main()
{
    int n;
    //nhap n
    cout<<"Nhap N = ";
    cin>>n;
    cout<<"Giai thu cua cac so chan la: "<<giai_thua(n);
    return 0;
}