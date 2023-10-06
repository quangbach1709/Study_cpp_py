#include<iostream>
#include<string>

using namespace std;

int dem(string str)
{
    int dem=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            dem++;
        }
        
    }
    return dem;
}

int main()
{
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);

    cout<<"So ky tu so trong chuoi la: "<<dem(str)<<endl;

    return 0;
}