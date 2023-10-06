#include<iostream>

using namespace std;

int main()
{
    int n,sum=0,dem=0;
    //nhap n
    cout<<"Nhap N = ";
    cin>>n;

    //tim uoc so
    cout<<"Cac uoc so la: ";
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
            dem++;
            cout<<i<<" ";
        }
        
    }
    //in dap an
    cout<<"\nTrung binh cong cac uoc so la: "<<(float)(sum/dem);
    
    return 0;
}