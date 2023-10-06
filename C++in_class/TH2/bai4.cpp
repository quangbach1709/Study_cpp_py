#include<iostream>

using namespace std;

int main()
{
    float diem;
    //nhap diem tb
    cout<<"Nhap diem trung binh: ";
    cin>>diem;
    //kiem tra diem
    if (diem<4.5)
    {
        cout<<"Loai yeu";
    }else
        if (diem<7.0)
        {
            cout<<"Loai trung binh";
        }else
            if (diem<8.5)
            {
                cout<<"Loai kha";
            }else
                if ((diem>8.5)&&(diem<=10))
                {
                    cout<<"Loai gioi";
                }
     return 0;           
        
}