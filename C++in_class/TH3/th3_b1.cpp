#include<iostream>

using namespace std;

int main()
{
     int m,n;
     //nhap m,n
     cout<<"M = ";
     cin>>m;
     cout<<"N = ";
     cin>>n;

     //dieu din m,n
     while (m>=n)
     {
          cout<<"Hay nhap lai m va n: ";
          cin>>m>>n;
     }

     //in ra tu be den lon
     cout<<"Day tu be den lon la: ";
     for (int i = m; i <= n; i++)
     {    
          cout<<i<<" ";
     }

     //in ra tu lon den be
     cout<<"\nDay tu lon den be la: ";
     for (int i = n; i >=m; i--)
     {
          cout<<i<<" ";
     }

     return 0;
     
     
}