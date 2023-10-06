#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,y;
    //nhap
    cout<<"Nhap x va y = ";
    cin>>x>>y;
    //giai
    cout<<"G = "<<(float)(x*y-pow(x,2)+x*pow(y,2)-pow(y,3));
    return 0;
}