#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    //nhap n
    cout<<"N = ";
    cin>>n;

    //tim so chinh phuong
    cout<<"Cac so chinh phuong la: ";
    for (int i = n; i <= 3*n; i++)
    {
        if (sqrt(i)==(int)sqrt(i))
        {
            cout<<i<<"\t";
        }
        
    }
    return 0;
}