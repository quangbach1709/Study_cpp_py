#include<iostream>

using namespace std;

int main()
{
    //Nhập 3 số thực a, b và c. Tìm và in ra số X là số nằm giữa trong 3 số a, b và c.
    float a,b,c;
    cout<<"A = ";
    cin>>a;
    cout<<"B = ";
    cin>>b;
    cout<<"C = ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
            {
                cout<<"X = "<<b;
            }
            else
            {
                cout<<"X = "<<c;
            }
        }
        else
        {
            cout<<"X = "<<a;
        }
    }
    else
    {
        if(b>c)
        {
            if(a>c)
            {
                cout<<"X = "<<a;
            }
            else
            {
                cout<<"X = "<<c;
            }
        }
        else
        {
            cout<<"X = "<<b;
        }
    }
    return 0;

}