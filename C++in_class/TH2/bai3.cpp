#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float x;
    //nhap x
    cout<<"Nhap x = ";
    cin>>x;
    if (x>0)
    {
        cout<<"Can bac 4 cua x la: "<<pow(x,1.0/4.0);
    
    }
    else
    cout<<"Khong tinh duoc";
    return 0;
}