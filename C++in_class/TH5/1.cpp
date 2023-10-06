#include<iostream>
#include<string>

using namespace std;

int dem(string str)
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
    cout<<"Nhap xau: ";
    getline(cin,str);

    cout<<"So ky tu in hoa trong xau la: "<<dem(str)<<endl;
    return 0;
}