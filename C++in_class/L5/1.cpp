#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1,str2;
    cout<<"Nhap xau S: ";
    getline(cin,str1);
    cout<<"Nhap xau W: ";
    getline(cin,str2);

    size_t x=str1.find(str2);
    if (x==string::npos)
    {
        cout<<"W khong xuat hien trong S";
    }
    else
        cout<<"W xuat hien trong S o vi tri "<<x;

    return 0;
    
}