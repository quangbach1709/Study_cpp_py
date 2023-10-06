#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float x;
    //nhap x
    cout<<"Nhap x = ";
    cin>>x;
    //dieu kien
    while (x<2)
    {
        cout<<"Bieu thuc khong xac dinh!"<<endl<<"Nhap lai x = ";
        cin>>x;
        
    }
    //dap an
    cout<<"F(x) = "<<(x*x+1)/(sqrt(x)-2);
    return 0;
}