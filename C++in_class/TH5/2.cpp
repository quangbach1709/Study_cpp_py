#include<iostream>
#include<string>

using namespace std;

void kiem_tra_rong(string &str);
void dao_nguoc(string &arr);

int main()
{
    string str;
    cout<<"Nhap xau: ";
    getline(cin,str);
    kiem_tra_rong(str);
    return 0;
}

void kiem_tra_rong(string &str)
{
    if (str.size()==0)
    {
        cout<<"Xau dau vao rong!";
    }
    else
    {
        cout<<"Noi dung cua xau la: "<<str<<endl;
        cout<<"Do dai cau xau la: "<<str.size()<<endl;
        
        cout<<"Xau sau khi dao nguoc la: ";
        dao_nguoc(str);

    }
}

void dao_nguoc(string &str)
{
    size_t a = str.size();
    for (size_t i = 0; i <= str.size() / 2; i++)
    {
        swap(str[i], str[a]);
        a--;
    }
}
