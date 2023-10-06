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
        cout<<"Nhap Ma Sv: ";
        getline(cin,sinhvien.msv);
        cout<<"Nhap ten SV: ";
        getline(cin,sinhvien.name);
        cout<<"Diem: ";
        cin>>sinhvien.diem;
        cin.ignore();

        sv.push_back(sinhvien);
    }
}

void xuat(vector<Sv>sv)
{
    cout<<"In danh sach:"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
    }
    
}

//neu vector rong thi them sinh vien moi nhap vao dau vector neu vector khong rong thi them vao vi tri 2 trong vector
void them_sv(vector<Sv>&sv)
{
    cout<<"Cho thong tin 1 SV:"<<endl;
    Sv sinhvien;
    cout<<"MaSV: ";
    getline(cin,sinhvien.msv);
    cout<<"Ten: ";
    getline(cin,sinhvien.name);
    cout<<"Diem: ";
    cin>>sinhvien.diem;
    cin.ignore();
    cout<<"Hay them x vao vi tri thu 2!"<<endl;
    if (sv.size()==0)
    {
        sv.insert(sv.begin(),sinhvien);
    }
    else
    {
        sv.insert(sv.begin()+1,sinhvien);
    }
    
}

int main()
{
    int n;
    do
    {
        cout<<"Cho so phan tu n = ";
        cin>>n;
    } while (n<0);
    cin.ignore();
    vector<Sv> sv;
    nhap(sv,n);
    xuat(sv);
    them_sv(sv);
    xuat(sv);
    return 0;
}

