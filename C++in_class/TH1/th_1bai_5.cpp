#include<iostream>

using namespace std;

int main()
{
    int monney;
    //nhap so tien rut
    cout<<"So tien ban muon rut la: ";
    cin>>monney;
    //dieu kien so tien
    while ((monney>5000000)&&(monney<0))
    {
        cout<<"Ban khong the rut so tien lon hon 5 Trieu hay nhap lai so tien can rut: ";
        cin>>monney;
    }
    //tim so to 500k
    int to500=monney /500000;
    monney=monney%500000;

    //tim so to 200k
    int to200=monney/200000;
    monney=monney%200000;

    //tim so to  100k
    int to100=monney/100000;
    monney=monney%100000;

    //tim so to 50k
    int to50=monney/50000;
    monney=monney%50000;

    //dap an
    cout<<"So to 500 nghin co the rut la: "<<to500<<endl;
    cout<<"So to 200 nghin co the rut la: "<<to200<<endl;
    cout<<"So to 100 nghin co the rut la: "<<to100<<endl;
    cout<<"So to 50 nghin co the rut la: "<<to50<<endl;
    cout<<"So tien con lai khong the rut la: "<<monney;
    return 0;
}