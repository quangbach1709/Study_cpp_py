#include<iostream>

using namespace std;

int main()
{
    float diem_mieng,diem_1_tiet,diem_hoc_ki,diem_trung_binh;
    cout<<"Diem Mieng = ";
    cin>>diem_mieng;
    cout<<"Diem Mot Tiet = ";
    cin>>diem_1_tiet;
    cout<<"Diem Hoc Ky = ";
    cin>>diem_hoc_ki;
    diem_trung_binh=(diem_mieng+diem_1_tiet*2+diem_hoc_ki*3)/6;
    cout<<"Diem TB = "<<diem_trung_binh;
    return 0;
}