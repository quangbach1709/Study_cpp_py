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
    if (x>0&&x!=2)
    {
        cout<<"f(x) = "<<(x*x+2*sqrt(x))/(x-2);
    }
    else
        cout<<"f(x) = 0";
    return 0;
}