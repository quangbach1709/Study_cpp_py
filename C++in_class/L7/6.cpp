#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Sv
{
    int sbd;
    string name;
    float diem;
};


void nhap(vector<Sv>&sv,int n)
{
    for (int i = 0; i < n; i++)
    {
        Sv sinhvien;
        cout<<"SBD: ";
        cin>>sinhvien.sbd;
        cin.ignore();
        cout<<"Ho va ten: ";
        getline(cin,sinhvien.name);
        do
        {
            cout<<"Diem: ";
            cin>>sinhvien.diem;
        } while (sinhvien.diem<0||sinhvien.diem>10);
        cin.ignore();
        sv.push_back(sinhvien);
    }
}

void xua_dau(string &str)
{
    while (str[0]==' ')
    {
        str.erase(0,1);
    }
    
}

void xua_cuoi(string &str)
{
    while (str[str.size()-1]==' ')
    {
        str.erase(str.size()-1,1);
    }
    
}

void xoa_giua(string &str)
{
    int i=0;
    while (i<str.size()-1)
    {
        if (str[i]==' '&& str[i+1]==' ')
        {
            str.erase(i,1);
            i--;
        }
        i++;
    }
    
}

void chuan_hoa(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i]=tolower(str[i]);
    }
    str[0]=toupper(str[0]);
    int i=0;
    while (i<str.size())
    {
        if (str[i]==' '&&str[i+1]!=' ')
        {
            str[i+1]=toupper(str[i+1]);
        }
        i++;
    }
    
    
}

void xu_ly(vector<Sv>&sv)
{
    for (int i = 0; i < sv.size(); i++)
    {
        xua_dau(sv[i].name);
        xua_cuoi(sv[i].name);
        xoa_giua(sv[i].name);
        chuan_hoa(sv[i].name);
    }
    
}

void xuat(vector<Sv>&sv,int n)
{
    cout<<"Danh sach SV:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<sv[i].sbd<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
    }
    
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap n = ";
        cin>>n;
    } while (n<=0);
    vector<Sv>sv;
    nhap(sv,n);
    xu_ly(sv);
    xuat(sv,n);
    return 0;
}