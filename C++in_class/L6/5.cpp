#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"N = ";
    cin >> n;
    int a[n];
    //nhap cac gia tri cau mang co dau cach
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }

    //tim gia tri lon nhat va dem so gia tri lon nhat
    int max=a[0];
    int count=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Gia tri lon nhat cua A: "<<max<<endl;
    for (int i=0;i<n;i++)
    {
        if (a[i]==max)
        {
            count++;
        }
    }
    
    cout<<"So phan tu co gia tri lon nhat: "<<count<<endl;
    return 0;
}