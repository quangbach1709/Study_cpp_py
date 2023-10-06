#include<iostream>
#include<string>

using namespace std;

bool kiem_tra(string str)
{
    for (int i = 0; i < str.size()/2; i++)
    {
        if (str[i]!=str[str.size()-i-1])
        {
            return false;
        }
        
    }
    return true;
}

void chuy_doi(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i]=tolower(str[i]);
    }
    
}

int main()
{
    string str;
    cout<<"Nhap xau: ";
    getline(cin,str);

    chuy_doi(str);
    if (kiem_tra(str))
    {
        cout<<"Chuoi la chuoi doi xung.";
    }
    else
        cout<<"Chuoi k phai chuoi doi xung.";

    return 0;
}