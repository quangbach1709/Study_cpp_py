#include<iostream>

using namespace std;

int main()
{
    int m,n,sum=0;
    //nhap m,n
    cout<<"M = ";
    cin>>m;
    cout<<"N = ";
    cin>>n;

    //dieu kien m,n
    while (m>=n)
    {
        cout<<"Hay nhap laij m,n: ";
        cin>>m>>n;
    }

    //ting tong day
    for (int i = m; i < n; i++)
    {
        sum+=i;
    }
    cout<<"Tong cua day so tuM den n la: "<<sum;

    return 0;
}