#include<iostream>
#include<string>

using namespace std;

void chen_them(string &str1,string str2,int p,int q)
{
    if (q>str1.size()||p>str1.size())
    {
        return;
    }
    else
    {
        if (p<q)
        {
            // str1.insert(p,str2);
            // str1.insert(q+str2.size(),str2);
            //swap
            int temp=p;
            p=q;
            q=temp;
        }
        
        {
            str1.insert(p,str2);
            str1.insert(q,str2);
        }
        
        cout<<"Ket qua: "<<str1;
    } 
}

int main()
{
    string str1,str2;
    cout<<"Nhap W = ";
    getline(cin,str1);
    cout<<"Nhap S = ";
    getline(cin,str2);

    int p,q;
    cout<<"P = ";
    cin>>p;
    cout<<"Q = ";
    cin>>q;

    chen_them(str1,str2,p,q);
    
    return 0;
}