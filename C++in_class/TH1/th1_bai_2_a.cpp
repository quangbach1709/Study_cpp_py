#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x;
    //input
    cout<<"Nhap x = ";
    cin>>x;
    //giai
    cout<<"F = "<<(float)(pow(x,5)+5*pow(x, 5.0 / 3.0)-6);
    return 0;
}