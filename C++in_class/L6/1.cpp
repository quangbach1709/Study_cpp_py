#include<iostream>

using namespace std;

int main()
{
    int n,dem=0;
    cout<<"N = ";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }

    //in cac phan tu 
    cout<<"Day A =";
    for (int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
    //in ra cac so am trong mang
    
    for (int i=0;i<n;i++)
    {
        if (a[i]<0)
        {
            dem++;
        }
    }
    cout<<"So so am trong A: "<<dem;
    return 0;
}