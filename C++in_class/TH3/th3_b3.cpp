#include<iostream>

using namespace std;

int main()
{
    int number,sum=0,dem=0;
    cout<<"Nhap cac so can tinh tong va trung binh (nhap 0 de ket thuc): ";
    
    while (true)
    {
        
        cin>>number;
        //diu kien so nguy duong
        if (number<=0)
        {
            break;
        }
        else
        {
        //tinh sum
        sum+=number;
        dem++;
        }
          
    }
    if (dem==0)
    {
        cout<<"Khong co so nguyen duong de tinh trung binh cong.";
    }
    else
    {
        cout<<"Tong cua cac so da nhap la: "<<sum<<endl;
        cout<<"Trung binh cong cua say vua nhap la: "<<(float)(sum/dem);
    }
    
    
    
    return 0;
}