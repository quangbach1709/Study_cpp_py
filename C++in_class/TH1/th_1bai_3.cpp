#include<iostream>
#define PI 3.1416
using namespace std;

int main()
{
    int r;
    //nhap
    cout<<"Nhap ban kinh r = ";
    cin>>r;
    //giai
    cout<<"Chu vi hinh tron la: "<<(float)(2*PI*r)<<endl;
    cout<<"Dien tich hinh tron la: "<<(float)(PI*r*r);
    return 0;
}