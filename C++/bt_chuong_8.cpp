#include<iostream>
#define PI 3.14

using namespace std;

struct Hinh_tron
{
    float r;
    friend istream& operator>>(istream &is, Hinh_tron &p)
    {
        cout<<"Nhap ban kinh: ";
        is>>p.r;
        return is;
    }
    
    float chu_vi()
    {
        return r*2*PI;
    }

    float dien_tich()
    {
        return r*r*PI;
    }
};

int main()
{
    Hinh_tron hinh_tron;
    cin>>hinh_tron;
    cout<<"Chu vi hinh tron: "<<hinh_tron.chu_vi()<<endl;
    cout<<"Dien tich hinh tron: "<<hinh_tron.dien_tich()<<endl;
    return 0;
}
