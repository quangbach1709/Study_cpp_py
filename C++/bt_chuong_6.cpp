#include<iostream>

using namespace std;

int giai_thua_for(int);
int giai_thua_de_quy(int);

int main()
{
    int n;
    do
    {
        cout<<"n = ";
        cin>>n;
    } while (n<0);
    
    cout<<"N! theo for: "<<giai_thua_for(n)<<endl;
    cout<<"N! theo de quy: "<<giai_thua_de_quy(n);
    return 0;
}

int giai_thua_for(int n)
{
    int giathua=1;
    for (int i = 1; i <=n; i++)
    {
        giathua*=i;
    }
    return giathua;
}

int giai_thua_de_quy(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n*giai_thua_de_quy(n-1);
    
}