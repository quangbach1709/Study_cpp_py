#include<iostream>
#include<string>

using namespace std;

void xoa_so(string &str)
{
    int i=0;
    while (i<str.size())
    {
        if (isdigit(str[i]))
        {
            str.erase(i,1);
            i--;
        }
        i++;
    }
    
}

int main()
{
    string str;
    cout<<"Nhap W = ";
    getline(cin,str);

    xoa_so(str);
    cout<<"W sau khi xoa cac chu so = "<<str;
    return 0;
}