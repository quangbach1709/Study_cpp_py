#include<iostream>

using namespace std;

int main()
{
    float diem;
    //nhap diem
    cout<<"Diem cua ban la: ";
    cin>>diem;

    if (diem<4.5)
    {
        cout<<"Diem F";
    }else
        if (diem<5.5)
        {
            cout<<"Diem D";
        }else
            if (diem<7.0)
            {
                cout<<"Diem C";
            }else
                if (diem<8.5)
                {
                    cout<<"Diem B";
                }else
                    if ((diem>8.5)&&(diem<10))
                    {
                        cout<<"Diem A";
                    }
                    
                
            
        
    return 0;
}