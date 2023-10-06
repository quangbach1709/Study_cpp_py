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
        Sv SV;
        cout<<"Nhap Ma SV: ";
        getline(cin,SV.msv);
        cout<<"Nhap Ten SV: ";
        getline(cin,SV.name);
        cout<<"Nhap Diem: ";
        cin>>SV.diem;
        cin.ignore();
        sv.push_back(SV);
    }
    
}

void xuat(vector<Sv>SV)
{
    cout<<"Danh sach SV:"<<endl;
    for (int i = 0; i < SV.size(); i++)
    {
        cout<<SV[i].msv<<"\t"<<SV[i].name<<"\t"<<SV[i].diem<<endl;
    }
    
}

void diem_cao(vector<Sv>&SV)
{
    float max=SV[0].diem;
    cout<<"Cac Sinh vien co diem cao nhat:"<<endl;
    
    for (int i = 0; i < SV.size(); i++)
    {
        if (SV[i].diem>max)
        {
            max=SV[i].diem;
        }
        
    }
    
    //in ra cac sinh vien co diem cao hon diem trung binh
    for (int i = 0; i < SV.size(); i++)
    {
        if (SV[i].diem==max)
        {
            cout<<SV[i].msv<<"\t"<<SV[i].name<<"\t"<<SV[i].diem<<endl;
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
    vector<Sv>SV;
    nhap(SV,n);
    xuat(SV);
    diem_cao(SV);
    return 0;
}
