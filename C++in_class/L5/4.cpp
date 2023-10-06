#include<iostream>
#include<string>
#include<sstream>

using namespace std;

// void xoa_dau(string &str)
// {
//     while (str[0]==' ')
//     {
//         str.erase(0,1);
//     }
    
// }

// void xoa_cuoi(string &str)
// {
//     while (str[str.size()-1]==' ')
//     {
//         str.erase(str.size()-1,1);
//     }
    
// }

// void xoa_giua(string &str)
// {
//     int i=0;
//     while (i<str.size())
//     {
//         if (str[i]==' '&&str[i+1]==' ')
//         {
//             str.erase(i,1);
//             i--;
//         }
//         i++;
//     }
    
// }

void chuan_hoa(string &str,string &str1)
{
    string word;
    stringstream ss(str);
    while (ss>>word)
    {
        str1+=word+" ";
    }
    if (str1!="")
    {
        str1.erase(str1.size()-1,1);
    }
    
}

int main()
{
    string str,str1="";
    cout<<"Nhap W = ";
    getline(cin,str);

    // xoa_dau(str);
    // xoa_cuoi(str);
    // xoa_giua(str);
    chuan_hoa(str,str1);
    cout<<"Chuan hoa = "<<str1;

    return 0;
}