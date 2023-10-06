#include<iostream>

using namespace std;

int main()
{
    char diem;
    //nhap diem
    cout<<"Nhap Diem: ";
    cin>>diem;

    //dieu kien cua diem
    if ((diem=='A')||(diem=='B')||(diem=='C')||(diem=='D')||(diem=='F'))
    {
        if (diem=='A')
        {
            cout<<"Loai Gioi";
        }else
            if (diem=='B')
            {
                cout<<"Loai Kha";
            }else
                if (diem=='C')
                {
                    cout<<"Loai Trung binh";
                }else
                    if ((diem=='D')||(diem=='F'))
                    {
                        cout<<"Loai Yeu";
                    }
        
    }else
        cout<<"Loi roi.\n";
        return 0;

    
}