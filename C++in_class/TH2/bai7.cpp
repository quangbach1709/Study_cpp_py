#include<iostream>

using namespace std;

int main()
{
    int day,month,year;
    bool nam_nhuan;
    //nhap ngay thang nam
    cout<<"Nhap Ngay: ";
    cin>>day;
    cout<<"Nhap Thang: ";
    cin>>month;
    cout<<"Nhap Nam: ";
    cin>>year;

    //dieu kien 
    if ((day<=31)&&(month>0&&month<=12)&&(year>0))
    {
        //tim nam nhuan
        if ((year%4==0)||(year%400==0))
        {
            nam_nhuan=1;
        }

        //kiem tra ngay
        if ((month==2)&&(nam_nhuan==1)&&(day>29))
        {
            cout<<"3 so nhap vao khong phai ngay thang nam.";
        }
        else//nhung thang co 30 ngay k the cong 1
            if (((month==4)||(month==6)||(month==9)||(month==11))&&(day>30))
            {
                cout<<"3 so nhap vao khong phai ngay thang nam.";
            }
            else//nhung thang co 31 ngay k the cong 1
                if (((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))&&(day==31))
                {
                    cout<<"3 so nhap vao khong phai ngay thang nam.";
                }
                else
                cout<<day+1<<"/"<<month<<"/"<<year;
                
                 
    }
    else
    cout<<"3 so nhap vao khong phai ngay thang nam.";
    return 0;
}