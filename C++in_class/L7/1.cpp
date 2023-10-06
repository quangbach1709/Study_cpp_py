#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct SV
{
    string msv;
    string name;
    float diem;
};

void nhap(vector<SV>&sv,int n)
{
    for (int i = 0; i < n; i++)
    {
        SV sinhvien;
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

void swap(SV &a,SV &b)
{
    SV tmp=a;
    a=b;
    b=tmp;
}

void xu_ly(vector<SV>&sv,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i;  j< n; j++)
        {
            if (sv[i].diem>sv[j].diem)
            {
                swap(sv[i],sv[j]);
            }
            
        }
        
    }
    
}

void xuat(vector<SV>&sv)
{
    cout<<"Danh sach Sinh vien:"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
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
    vector<SV>sv;
    nhap(sv,n);
    xu_ly(sv,n);
    xuat(sv);
    return 0;

}