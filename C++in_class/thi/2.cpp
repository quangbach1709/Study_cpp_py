#include<iostream>
#include<string>

using namespace std;

struct Sv
{
    string msv;
    string name;
    float diem;
};

void nhap(Sv sinh_vien[],int n)
{
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap Ma SV: ";
        getline(cin,sinh_vien[i].msv);
        cout<<"Nhap Ten SV: ";
        getline(cin,sinh_vien[i].name);
        cout<<"Nhap Diem: ";
        cin>>sinh_vien[i].diem;
        cin.ignore();
    }
    
}

void xuat(Sv sinh_vien[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\nMSV: "<<sinh_vien[i].msv<<"\nTen Sv: "<<sinh_vien[i].name<<"\nDiem cua Sv: "<<sinh_vien[i].diem<<endl;

    }
    
}

void sv_kha(Sv sinh_vien[],int n)
{
    cout<<"\nSinh vien cos hoc luc kha: "<<endl;
    for (int i = 0; i < n; i++)
    {
        if (sinh_vien[i].diem<7)
        {
            cout<<"MSV: "<<sinh_vien[i].msv<<"\nTen Sv: "<<sinh_vien[i].name<<"\nDiem cua Sv: "<<sinh_vien[i].diem<<endl;
        }
        
    }
    
}

void sv_gioi(Sv sinh_vien[],int n)
{
    cout<<"\nCac sinh vien gioi va xuat sac la: "<<endl;
    for (int i = 0; i < n; i++)
    {
        if (sinh_vien[i].diem>7)
        {
            cout<<"MSV: "<<sinh_vien[i].msv<<"\nTen Sv: "<<sinh_vien[i].name<<"\nDiem cua Sv: "<<sinh_vien[i].diem<<endl;
        }
        
    }
    
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap so sinh vien n = ";
        cin>>n;
    } while (n<0);

    Sv sinh_vien[n];

    nhap(sinh_vien,n);
    xuat(sinh_vien,n);
    sv_kha(sinh_vien,n);
    sv_gioi(sinh_vien,n);

    return 0;
}