#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;float x;
    //nhap
    cout<<"Nhap x = ";
    cin>>x;
    //vong lap kieu kien
    while (x<0)
    {
        cout<<"Nhap lai x = ";
        cin>>x;
    }
    cout<<"Nhap n = ";
    cin>>n;
    //tinh toan
    cout<<"Dap an = "<<(float)(pow(3,n)+5*abs(x)+log(3*x));
    return 0;
    
}