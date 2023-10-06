#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;
    //nhap
    cout<<"Nhap a,b,c: ";
    cin>>a>>b>>c;
    //tinh p
    float p=(a+b+c)/2;
    //tinh s
    cout<<"S = "<<(float)(sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}