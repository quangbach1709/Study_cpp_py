#include<iostream>
#define PI 3.14
#include<math.h>

using namespace std;
//ham tinh din tich hinh tron
float dien_tich_tron(float n)
{
    return PI*n*n;
}

//ham tinh chu vi hinh tron
float chu_vi_tron(float n)
{
    return 2*PI*n;
}

//ham tinh dien tich hinh vuong
float dien_tich_vuong(float n)
{
    return n*n;
}

//ham tinh chu vi hinh vuong 
float chu_vi_vuong(float a)
{
    return 4*a;
}

//ham tinh dien tich chu nhat
float dien_tich_chu_nhat(float a,float b)
{
    return a*b;
}

//ham tinh chu vi chu nhat
float chu_vi_chu_nhat(float a,float b)
{
    return 2*(a+b);
}

//ham tinh chu vi tam giac
float chu_vi_tam_giac(float a,float b,float c)
{
    return a+b+c;
}

//ham tinh dien tich tam giac
float dien_tich_tam_giac(float a,float b,float c)
{
    return sqrt((chu_vi_tam_giac(a,b,c)/2)*(((chu_vi_tam_giac(a,b,c)/2)-a)*((chu_vi_tam_giac(a,b,c)/2)-b)*((chu_vi_tam_giac(a,b,c)/2)-c)));
}

int main()
{
    float n,a,b,c,lua_chon;
    //nhap lua chon
    cout<<"Chon 1: lam voi hinh tron"<<endl
            <<"Chon 2: lam voi hinh vuong."<<endl
            <<"Chon 3: lam voi hinh chu nhat"<<endl
            <<"Chon 4: lam voi hinh tam giac"<<endl;
    cout<<"Nhap lua chon cua ban: ";
    cin>>lua_chon;

    //lua chon
    while (lua_chon<=0||lua_chon>4)
    {
        cout<<"Nhap lai lua chon cua ban: ";
        cin>>lua_chon;
    }
    if (lua_chon==1)//hinh tron
    {
        cout<<"Nhap ban kinh hinh tron: ";
        cin>>n;
        while (n<=0)
        {
            cout<<"Nhap lai ban kinh: ";
            cin>>n;
        }
        cout<<"Dien tich hinh tron la: "<<dien_tich_tron(n)<<endl;
        cout<<"Chu vi hinh tron la: "<<chu_vi_tron(n)<<endl;   
    }
    else if (lua_chon==2)//hinh vuong
    {
        cout<<"Nhap do dai canh hinh vuong la: ";
        cin>>n;
        while (n<=0)
        {
            cout<<"Nhap lai do dai hinh vuong: ";
            cin>>n;
        }
        cout<<"Dien tich hinh vuong la: "<<dien_tich_vuong(n)<<endl;
        cout<<"chu vi hinh vuong la: "<<chu_vi_vuong(n)<<endl;
    }
    else if (lua_chon==3)//hinh chu nhat
    {
        cout<<"Nhap chieu dai va chieu rong hinh chu nhat: ";
        cin>>a>>b;
        while (a<=0||b<=0)
        {
            cout<<"Nhap lai chieu dai va rong cua hinh chu nhat: ";
            cin>>a>>b;
        }
        cout<<"Dien tich hinh chu nhat la: "<<dien_tich_chu_nhat(a,b)<<endl;
        cout<<"Chu vi hinh chu nhat la: "<<chu_vi_chu_nhat(a,b)<<endl;
        
    }
    else if (lua_chon==4)//hinh tam giac
    {
        cout<<"Nhap lan luot 3 canh cua tam giac: ";
        cin>>a>>b>>c;
        while ((a<=0||b<=0||c<=0)&&((a+b<=c)&&(a+c<=b)&&(b+c<=a)))
        {
            cout<<"Nhap lai 3 canh cua tam giac: ";
            cin>>a>>b>>c;
        }
        cout<<"Dien tich cau tam giac la: "<<dien_tich_tam_giac(a,b,c)<<endl;
        cout<<"Chu vi cua tam giac la: "<<chu_vi_tam_giac(a,b,c)<<endl;
        
    }
    return 0;  
}
