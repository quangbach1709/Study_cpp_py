#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cout<<"N = ";
    cin >> n;
    
    string a[50];
    //nhap cac gia tri cau mang co dau cach
    cin.ignore();
    //fflush(stdin);
    for (int i=0;i<n;i++)
    {
       
        cout<<"Ten ngon ngu lap trinh thu "<<i+1<<": ";
        
        //fflush(stdin);
        getline(cin,a[i]);
        
    }
 
    //tim va in ra ngon ngu lap trinh ngan nhat
    string min=a[0];
    for (int i=0;i<n;i++)
    {
        if (a[i].length()<=min.length())
        {
            min=a[i];
        }
    }
    cout<<"Ngon ngu ngan nhat cuoi cung la: "<<min;
    return 0;
}