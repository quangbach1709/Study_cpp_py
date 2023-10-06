#include<iostream>
#include<string>

using namespace std;

int main()
{
    //khai bao
    string name,lop;
    //input
    cout<<"Nhap ten sinh vien: ";
    getline(cin,name);
    cout<<"Nhap lop: ";
    getline(cin,lop);
    //print

    cout<<"Loi chao tieng Viet: Xin chao "<<name<<", Lop "<<lop<<endl;
    cout<<"Loi chao tieng Anh: Hello "<<name<<", class "<<lop;
    return 0;
}