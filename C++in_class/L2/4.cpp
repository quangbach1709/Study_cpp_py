#include<iostream>
#include<math.h>

using namespace std;

/*float tong_can(int n)
{// tong can long nhau f(n) = sqrt(1+sqrt(2+sqrt(3+...+sqrt(n)))
    if (n==1)
    {
        return sqrt(1);
    }
    else
    {
        return sqrt(n+tong_can(n));
    }
    
}*/

int main()
{
    float n,f=0;
    cout<<"N = ";
    cin>>n;
    //cout<<"F(n) = "<<tong_can(n);

    // tong can long nhau f(n) = sqrt(1+sqrt(2+sqrt(3+...+sqrt(n)))
    for(int i=n;i>=1;i--)
    {
        f=sqrt(i+f);
    }
    cout<<"F(n) = "<<f;
    return 0;
}