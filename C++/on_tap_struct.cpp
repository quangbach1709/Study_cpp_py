#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Date
{
    int ngay, thang, nam;
};

struct Sv
{
    string name, lop;
    int sbd;
    Date sinh;
    string khoa;
    float diem;
};

void nhap_date(Date &sinhvien)
{
    cout << "Nhap ngay sinh: ";
    cin >> sinhvien.ngay;
    cout << "Nhap thang: ";
    cin >> sinhvien.thang;
    cout << "Nhap nam: ";
    cin >> sinhvien.nam;
}

void nhap(Sv sinhvien[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap SBD cua Sv " << i + 1 << ":";
        cin >> sinhvien[i].sbd;
        cin.ignore();
        cout << "Nhap Ho ten cua Sv " << i + 1 << ":";
        getline(cin, sinhvien[i].name);
        cout << "Nhap ngay thang nam sinh cua Sv " << i + 1 <<endl;
        nhap_date(sinhvien[i].sinh);
        cin.ignore();
        // cout << "Nhap lop cua Sv " << i + 1 << ":";
        // getline(cin, sinhvien[i].lop);
        cout<<"Nhap khoa thi: ";
        getline(cin,sinhvien[i].khoa);
        cout<<"Nhap diem thi: ";
        cin>>sinhvien[i].diem;
    }
}

void swap(Sv &sinh_vien[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sinh_vien[i].diem<sinh_vien[j].diem)
            {
                Sv temp=sinh_vien[i];
                sinh_vien[i]=sinh_vien[j];
                sinh_vien[j]=temp;
            }
        }
    }
    
}

void xuat(Sv sinhvien[], int n)
{
    // cout << setw(10) << "MSV" << setw(20) << "Ho ten" << setw(15) << "Ngay sinh" << setw(10) << "Lop" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << setw(10) << sinhvien[i].msv<< setw(20) << sinhvien[i].name<< setw(15)
    //     <<sinhvien[i].sinh.ngay << "/" << sinhvien[i].sinh.thang << "/" << sinhvien[i].sinh.nam
    //     << setw(10) << sinhvien[i].lop << endl;
    // }

    cout<<setw(10)<<"SBD"<<setw(20)<<"Ho ten"<<setw(15)<<"Ngay sinh"<<setw(10)<<"Khoa"<<setw(10)<<"Diem"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<setw(10)<<sinhvien[i].sbd<<setw(20)<<sinhvien[i].name<<setw(9)
        <<sinhvien[i].sinh.ngay<<"/"<<sinhvien[i].sinh.thang<<"/"<<sinhvien[i].sinh.nam<<setw(10)
        <<sinhvien[i].khoa<<setw(10)<<sinhvien[i].diem<<endl;
    }
}

void trung_tuyen(Sv sinh_vien[],int n)
{
    //in ra cac sinh vien co diem thi >=25
    cout<<"Cac sinh vien trung tuyen nganh CNTT la: "<<endl;
    cout<<setw(10)<<"SBD"<<setw(20)<<"Ho ten"<<setw(15)<<"Ngay sinh"<<setw(10)<<"Khoa"<<setw(10)<<"Diem"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (sinh_vien[i].diem>=25 && (sinh_vien[i].khoa=="CNTT" || sinh_vien[i].khoa=="cntt")))
        {
            cout<<setw(10)<<sinh_vien[i].sbd<<setw(20)<<sinh_vien[i].name<<setw(9)
            <<sinh_vien[i].sinh.ngay<<"/"<<sinh_vien[i].sinh.thang<<"/"<<sinh_vien[i].sinh.nam<<setw(10)
            <<sinh_vien[i].khoa<<setw(10)<<sinh_vien[i].diem<<endl;
        }
        
    }
    
}

void tim_sbd(Sv sinh_vien[],int n,int sbd)
{
    
    for(int i=0;i<n;i++)
    {
        if(sinh_vien[i].sbd==sbd)
        {
            cout<<setw(10)<<sinh_vien[i].sbd<<setw(20)<<sinh_vien[i].name<<setw(9)
            <<sinh_vien[i].sinh.ngay<<"/"<<sinh_vien[i].sinh.thang<<"/"<<sinh_vien[i].sinh.nam<<setw(10)
            <<sinh_vien[i].khoa<<setw(10)<<sinh_vien[i].diem<<endl;
        }
    }
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
    } while (n < 0 || n > 100);
    cin.ignore();
    Sv sinhvien[n];

    nhap(sinhvien, n);
    swap(sinhvien,n);
    xuat(sinhvien, n);
    trung_tuyen(sinhvien,n);
    cout<<"Nhap SBD can tim kiem: ";
    int sbd;
    cin>>sbd;
    cout<<setw(10)<<"SBD"<<setw(20)<<"Ho ten"<<setw(15)<<"Ngay sinh"<<setw(10)<<"Khoa"<<setw(10)<<"Diem"<<endl;
    tim_sbd(sinhvien,n,sbd);

    return 0;
}
