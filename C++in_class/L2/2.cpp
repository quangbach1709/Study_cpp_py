#include<iostream>

using namespace std;

int tong(int n)
{
    if (n==1)
    {
        return 0;
    }
    else
    {
        return ((n-1)*n*(n+1))+tong(n-1);
    }
    
}
int main()
{
    int n;
    cout<<"N = ";
    cin>>n;
    cout<<"A = "<<tong(n);
    return 0;
}