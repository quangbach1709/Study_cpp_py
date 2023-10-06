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
    if (x<=1)
    {
        cout<<"f(x) khong xac dinh!";
    }
    else//tinh toan va in
        cout<<"f(x) = "<<pow(x,3)+sqrt(x-1)+3*exp(x);
    
    return 0;
}