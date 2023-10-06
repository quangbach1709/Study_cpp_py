#include<iostream>
#include<string>

using namespace std;

int dem(string &str1,string &str2)
{
    int dem=0;
    size_t vi_tri=str1.find(str2);
    while (vi_tri!=string::npos)
    {
        dem++;
        vi_tri=str1.find(str2,vi_tri+1);
    }
    return dem;
}

int main()
{
    string str1,str2;
    cout<<"Nhap chuoi: ";
    getline(cin,str1);
    cout<<"Nhap ky tu can tim: ";
    getline(cin,str2);

    if (dem(str1,str2)!=0)
    {
        cout<<"So lan xuat hien cua ky tu can tim la: "<<dem(str1,str2)<<endl;
    }
    else
        cout<<"ky tu do khong xuat hien trong xau"<<endl;

    return 0;
    
}