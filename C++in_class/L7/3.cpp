#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Sv
{
    string msv;
    string name;
    float diem;
};

void nhap(vector<Sv>&sv,int n)
{
    for (int i = 0; i < n; i++)
    {
        Sv sinhvien;
        cout<<"Nhap Ma SV: ";
        getline(cin,sinhvien.msv);
        cout<<"Nhap Ten SV: ";
        getline(cin,sinhvien.name);
        cout<<"Nhap Diem: ";
        cin>>sinhvien.diem;
        cin.ignore();
        sv.push_back(sinhvien);
    }
    
}

void xuat(vector<Sv>sv)
{
    cout<<"Danh sach SV da nhap:"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
    }
    
}

void sv_kha(vector<Sv>sv)
{
    cout<<"Cac Sinh vien co Hoc luc Kha:"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].diem>=2.5&&sv[i].diem<=3.2)
        {
            cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
        }
        
    }
    
}

void sv_gioi(vector<Sv>sv)
{
    cout<<"Cac Sinh vien co Hoc luc Gioi/Xuat sac:"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].diem>3.2)
        {
            cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
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
    } while (n<=0);
    cin.ignore();
    vector<Sv>sv;
    nhap(sv,n);
    xuat(sv);
    sv_kha(sv);
    sv_gioi(sv);
    return 0;
}