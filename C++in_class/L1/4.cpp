#include<iostream>

using namespace std;

int main()
{
    float a0,a1,a2,a3,a4;
    float x;
    //f(x)=a0+a1*x+a2*x^2+a3*x^3+a4*x^4
    cout<<"X = ";
    cin>>x;
    cout<<"A0 = ";
    cin>>a0;
    cout<<"A1 = ";
    cin>>a1;
    cout<<"A2 = ";
    cin>>a2;
    cout<<"A3 = ";
    cin>>a3;
    cout<<"A4 = ";
    cin>>a4;
    
    cout<<"f(x) = "<<a0+a1*x+a2*x*x+a3*x*x*x+a4*x*x*x*x;
    return 0;


}