#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    //giai phuong trinh (1+sqrt(x))/(x-3)
    int x;
    cout<<"Nhap x = ";
    cin>>x;
    if(x==3)
    {
        cout<<"Bieu thuc khong xac dinh";
    }
    else if(x>3)
    {
        float temp=(1+sqrt(x))/(x-3);
        cout<<"Ket qua: "<<temp;
    }
    else if(x<0)
    {
        cout<<"Bieu thuc khong xac dinh";
    }

}




