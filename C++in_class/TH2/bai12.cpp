#include<iostream>

using namespace std;

int main()
{
    int so_luong,don_gia;
    //nhap so luong va don gia
    cout<<"Nhap so luong can mua: ";
    cin>>so_luong;
    cout<<"Nhap don gia cua san pham: ";
    cin>>don_gia;
    //tinh tong tien 
    float tong_tien=don_gia*so_luong;

    //dieu kien 
    if (so_luong<=0||don_gia<=0)
    {
        cout<<"So lieu khong hop le.";
    }
    else
    {
        if (so_luong>=10)
        {
            tong_tien=tong_tien*(30/100);   
        }
        else if (so_luong>4&&so_luong<10)
        {
            tong_tien=tong_tien*(15/100);
        } 
    }
    cout<<"Tong so tien la: "<<tong_tien;
    return 0;
}