#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"N = ";
    cin>>n;
    float a[n];
    for (int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>a[i];
    }
    //in ra cac phan tu o vi tri chan
    cout<<"Cac phan tu o vi tri chan:";
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            cout<<" "<<a[i];
        }
    }
    return 0;
}