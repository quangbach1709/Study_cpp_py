#include<iostream>

using namespace std;
//ham tinh giai thua so le
int giai_thua(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*giai_thua(n-2);
    }
    
}

int main()
{
    int n;
    //nhap n
    cout<<"Nhap N = ";
    cin>>n;
    //in dap an
    cout<<"Giai thua cua cac so le la N! = "<<giai_thua(n);
    return 0;
}