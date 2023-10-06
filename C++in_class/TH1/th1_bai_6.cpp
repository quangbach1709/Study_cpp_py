#include<iostream>
#include<math.h>
#define PI 3.1416

using namespace std;

int main()
{
    float a,b,c;
    //nhap
    cout<<"Nhap do dai 2 canh a,b: ";
    cin>>a>>b;
    cout<<"Goc xen giua la: ";
    cin>>c;
    //tinh toan
    
    cout<<"S = "<<(float)(0.5*a*b*sin(c*PI/180));
    return 0;
    
}