#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    //nhap n
    cout<<"Nhap N = ";
    cin>>n;
    while (n<=0)
    {
        cout<<"Hay nhap lai gia tri N = ";
        cin>>n;
    }
    //tim so chinh phuong nho hon n
    cout<<"Cac so chinh phuong nho hon "<<n<<" la: ";
    for (int i = 1; i*i < n; i++)
    {
        cout<<i*i<<" ";
    }
    

    
    
    return 0;
}