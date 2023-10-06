#include<iostream>
#include<string>

using namespace std;

int main()
{
    string w,s;
    cout<<"Nhap W = ";
    getline(cin,w);

    s=w+w+w;
    cout<<"Cac xau con la:"<<endl;
    for (int i = 0; i < s.size(); i+=3)
    {
        cout<<s.substr(i,3)<<endl;
    }
    
    return 0;
}