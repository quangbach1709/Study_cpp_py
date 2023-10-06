#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Date
{
    int day,month,year;
};

struct Sv
{
    string name;
    Date date;
};

void nhap(vector<Sv>&sv,int n)
{
    for (int i = 0; i < n; i++)
    {
        Sv sinhvien;
        cout<<"Nhap Ten: ";
        getline(cin,sinhvien.name);
        cout<<"Nhap ngay sinh: ";
        cin>>sinhvien.date.day;
        cin.ignore();
        cout<<"Nhap thang sinh: ";
        cin>>sinhvien.date.month;
        cin.ignore();
        cout<<"Nhap nam sinh: ";
        cin>>sinhvien.date.year;
        cin.ignore();
        sv.push_back(sinhvien);
    }
    
}

void xuat(vector<Sv>sv)
{
    cout<<"Danh sach sinh vien la:"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        cout<<sv[i].name<<"\t"<<sv[i].date.day<<"/"<<sv[i].date.month<<"/"<<sv[i].date.year<<endl;
    }
    
}

void xuat_nam(vector<Sv>sv,int nam)
{
    cout<<"Cac sinh vien co nam sinh "<<nam<<" la: "<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].date.year==nam)
        {
            cout<<sv[i].name<<"\t"<<sv[i].date.day<<"/"<<sv[i].date.month<<"/"<<sv[i].date.year<<endl;
        }
        
    }
    
}

void tim_ngay(vector<Sv>sv)
{
    cout<<"Sinh vien co ngay sinh 29/2 la: "<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].date.day==29 && sv[i].date.month==2)
        {
            cout<<sv[i].name<<"\t"<<sv[i].date.day<<"/"<<sv[i].date.month<<"/"<<sv[i].date.year<<endl;
        }
        
    }
    
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap so sinh vien: ";
        cin>>n;
    } while (n<=0);
    cin.ignore();
    vector<Sv>sv;
    nhap(sv,n);
    xuat(sv);
    int k;
    cout<<"Nhap nam can tim: ";
    cin>>k;
    cin.ignore();
    xuat_nam(sv,k);
    tim_ngay(sv);
    return 0;
}