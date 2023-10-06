#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float x;
    //nhap x 
    cout<<"Nhap x = ";
    cin>>x;

    //dieu kien
    if (x<0)
    {
        cout<<"Bieu thuc khong xac dinh.";
    }
    else//tinh toan va in dap an
        cout<<"f(x) = "<<(exp(x)-1)/(sqrt(x)+1);
        
    return 0;
}