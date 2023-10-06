#include <iostream>
#include <string>

using namespace std;

struct sinh_vien
{
    int ma_sv;
    string name;
    string lop;
};

void nhap_sv(sinh_vien &sv)
{
    cout << "Nhap ma sinh vien: ";
    cin >> sv.ma_sv;
    cin.ignore();
    cout << "Nhap ho ten sinh vien: ";
    getline(cin, sv.name);
    cout << "Nhap lop: ";
    getline(cin, sv.lop);
}
void in_sv(sinh_vien *sv, int n)
{
    cout << "\nMSV: " << sv[n].ma_sv << endl;
    cout << "Ho ten: " << sv[n].name << endl;
    cout << "Lop: " << sv[n].lop << endl;
    cout << "-----------------------"<<endl;
}

//in ra thong tin sinh vien co lop la ttnt  
void dua_tt_lop(sinh_vien *sv, int n)
{
    cout << "Sinh vien thuoc lop ttnt la: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (sv[i].lop == "ttnt" || sv[i].lop == "TTNT")
        {
            in_sv(sv, i);
        }
    }
}

//sap xep sinh vien theo ho ten tang dan
void sap_xep(sinh_vien *sv, int n)
{
    cout<<"\nDanh sach sinh vien sau khi sap xep theo ho ten tang dan: "<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (sv[j].name > sv[j + 1].name)
            {
                sinh_vien temp = sv[j];
                sv[j] = sv[j + 1];
                sv[j + 1] = temp;
            }
        }
    }
}

int main()
{
    sinh_vien *sv;
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    cout<<endl;
    sv = new sinh_vien[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap thong tin sinh vien thu "<<i+1<<endl;
        nhap_sv(sv[i]);
        cout<<endl;
    }
    cout << "Danh sach sinh vien: " << endl;
    for (int i = 0; i < n; i++)
    {
        in_sv(sv, i);
    }
    dua_tt_lop(sv, n);
    sap_xep(sv, n);
    for (int i = 0; i < n; i++)
    {
        in_sv(sv, i);
    }

    return 0;
}
