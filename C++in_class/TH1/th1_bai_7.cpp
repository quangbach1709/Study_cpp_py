#include<iostream>
#include<math.h>

using namespace std;

//ham tinh do dai cac canh
float do_dai(float x1,float y1, float x2, float y2)
{
    float d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return d;
}


int main()
{
    float x1,y1,x2,y2,x3,y3;
    //nhap toa do
    cout<<"Toa do x,y cua diem A la: ";
    cin>>x1>>y1;
    cout<<"Toa do x,y cua diem B la: ";
    cin>>x2>>y2;
    cout<<"Toa do x,y cua diem C la: ";
    cin>>x3>>y3;

    //do dai cac canh
    float ab=do_dai(x1,y1,x2,y2);
    float bc=do_dai(x2,y2,x3,y3);
    float ca=do_dai(x3,y3,x1,y1);

    //tinh chu vi
    float p=ab+bc+ca;
    cout<<"Chu vi cua tam giac ABC la: "<<p<<endl;

    //tinh dien tich
    cout<<"S = "<<sqrt(p*(p-ab)*(p-bc)*(p-ca));
    return 0;
}