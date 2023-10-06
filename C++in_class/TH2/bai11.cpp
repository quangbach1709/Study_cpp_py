#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float x;
    //nhap x
    cout<<"x = ";
    cin>>x;

    //dieu kien
    if (x>=0&&x!=3)
    {
        //tinh toan va in 
        cout<<"f(x) = "<<(2*x*x+1+sqrt(x))/(x-3);
    }
    else
        cout<<"f(x) = 0";
    return 0;
}