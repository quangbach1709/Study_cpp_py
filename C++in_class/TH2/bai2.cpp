#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c;
    //Nhap cac canh
    cout<<"Nhap 3 canh cua tam giac: \n";
    cout<<"Canh thu 1: ";
    cin>>a;
    cout<<"Canh thu 2: ";
    cin>>b;
    cout<<"Canh thu 3: ";
    cin>>c;
    //kiem tra canh
    if (((a>0)&&(b>0)&&(c>0))&&(a+b>=c))
    {
        
        if (a==b&&b==c&&c==a)
        {
            cout<<"Day la tam giac deu";
        }
        else
        if ((sqrt(a*a+b*b)==c)||(sqrt(a*a+c*c)==b)||(sqrt(b*b+c*c)==a))
        {
            cout<<"Day la tam giac vuong";
        }
        else
        if ((a==b)||(b==c)||(c==a))
        {
            cout<<"Day la tam giac can";
        }
        else
        cout<<"Day la tam giac thuong";

    }
    else
    cout<<"Day k phai tam giac";
    return 0;


}