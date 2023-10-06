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
        cout<<"Nhap Ten: ";
        getline(cin,sinhvien.name);
        cout<<"Nhap Diem: ";
        cin>>sinhvien.diem;
        cin.ignore();
        sv.push_back(sinhvien);

    }
    
}

void xuat(vector<Sv>sv)
{
    cout<<"Danh sach sinh vien :"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
    }
    
}

void sv_diem_cao(vector<Sv>sv)
{
    float max=sv[0].diem;
    cout<<"Sinh vien co diem cao nhat la:"<<endl;
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].diem>max)
        {
            max=sv[i].diem;
        }
        
    }
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].diem==max)
        {
            cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
        }
        
    }
    
    
}

void tim_ten(vector<Sv>&sv)
{   
    Sv sinhvien;
    int dem=0;
    cout<<"Nhap ten can tim: ";
    string name;
    getline(cin,name);

    for (int i = 0; i < sv.size(); i++)
    {
        if (name==sv[i].name)
        {
            dem++;
        }
        
    }

    if (dem!=0)
    {
        cout<<"Cac sinh vien co ten "<<name<<" la:"<<endl;
        for (int i = 0; i < sv.size(); i++)
            {
                if (name==sv[i].name)
                {
                    cout<<sv[i].msv<<"\t"<<sv[i].name<<"\t"<<sv[i].diem<<endl;
                }
                
            }
    }
    else
    {
        cout<<"Bo sung Ma SV: ";
        getline(cin,sinhvien.msv);
        sinhvien.name=name;
        cout<<"Bo sung Diem : ";
        cin>>sinhvien.diem;
        cin.ignore();

        sv.push_back(sinhvien);
    }
    xuat(sv);
}

void xoa_sv_diem_thap(vector<Sv>&sv)
{
    float min=sv[0].diem;
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].diem<min)
        {
            min=sv[i].diem;
        }
        
    }
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].diem==min)
        {
            sv.erase(sv.begin()+i);
        }
        
    }
    
    xuat(sv);
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
    sv_diem_cao(sv);
    tim_ten(sv);
    xoa_sv_diem_thap(sv);
    return 0;

}
