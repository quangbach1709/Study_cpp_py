#include<iostream>
#include<string>

using namespace std;

int dem(string str1,string str2)
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

void vi_tri(string str1, string str2)
{
    
    size_t pos = str1.find(str2);
    while (pos != string::npos)
    {
        cout << pos << " ";
        pos = str1.find(str2, pos + 1);
    }
}

void chen_xau(string &str1,string &str2)
{
    str1.insert(str1.size(),str2);
}

int main()
{
    string str1,str2;
    cout<<"Nhap chuoi 1: ";
    getline(cin,str1);
    cout<<"Nhap chuoi 2: ";
    getline(cin,str2);

    if (dem(str1,str2)!=0)
    {
        cout<<"So lan xuat hien cua chuoi 2 trong chuoi 1 la: "<<dem(str1,str2)<<endl;
        cout<<"Vi tri xuat hien cua chuoi 2 la: "<<endl;
        vi_tri(str1,str2);
    }
    else
    {
        chen_xau(str1,str2);
        cout<<"Chuoi sau khi chen la: "<<str1;
    }
    
    return 0;
}