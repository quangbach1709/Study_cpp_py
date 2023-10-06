#include<iostream>
#include<string>

using namespace std;

void xoa_dau_cuoi(string &str)
{
    while (str[0]==' ')
    {
        str.erase(0,1);
    }
    
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
        if (str[i]==' '&&str[i+1]==' ')
        {
            str.erase(i,1);
        }
        else
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
    while (i<str.size()-1)
    {
        if (str[i]==' '&&str[i+1]!=' ')
        {
            str[i+1]=toupper(str[i+1]);
        }
        i++;
    }
    
}

int chu_hoa(string &str)
{
    int dem=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
        {
            dem++;
        }
        
    }
    return dem;
}

int main()
{
    string str;
    cout<<"Nhap ho va ten:"<<endl;
    getline(cin,str);
    xoa_dau_cuoi(str);
    xoa_giua(str);
    chuan_hoa(str);
    cout<<"Chuan hoa:"<<endl<<str<<endl;
    cout<<"So tu: "<<chu_hoa(str);
    return 0;
}