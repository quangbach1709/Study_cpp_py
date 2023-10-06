#include<iostream>

using namespace std;

//ham tinh giai thua
int giai_thua(int n)
{
   if (n==1)
   {
    return 1;

   }
    else
    {
         return n*giai_thua(n-1);
    }
   
}

int main()
{
    int n;
    //nhap n
    cout<<"Nhap so n = ";
    cin>>n;
    cout<<"N! = "<<giai_thua(n);
    return 0;
}