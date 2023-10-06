#include<iostream>

using namespace std;

int main()
{
    int a,b,c,temp=0;
    cout<<"Nhap a = ";
    cin>>a;
    cout<<"Nhap b = ";
    cin>>b;
    cout<<"Nhap c = ";
    cin>>c;
    if (b<=c)
    {
        temp=a*a+3*a-1;
    }
    else if(b>c)
    {
        temp=0;
    }
    
    
    cout<<"Y = "<<temp<<endl;
    return 0;

}