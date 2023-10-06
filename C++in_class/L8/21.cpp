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

void swap(Sv &a,Sv &b)
{
    Sv tmp =a;
    a=b;
    b=tmp;
}
// sap sep theo diem tang dan
void sap_xep(vector<Sv>&sv)
{
    for (int i = 0; i < sv.size()-1; i++)
    {
        for (int j = i+1; j < sv.size(); j++)
        {
            if (sv[i].diem>sv[j].diem)
            {
                swap(sv[i],sv[j]);
            }
            
        }
        
    }
    
}

void xuat(vector<Sv>&sv)
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
    vector<Sv>sv;
    nhap(sv,n);
    sap_xep(sv);
    xuat(sv);

    return 0;
}