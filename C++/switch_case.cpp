#include<iostream>
using namespace std;
int main(){

    int month,year;
    cin>>year>>month;
    switch (month)
    {
    case (1):
    case (3):
    case(5):
    case(7):
    case(8):
    case(10):
    case(12):printf("Thang %d nam %d co 31 ngay",month,year);
    break;
    
    case(4):
    case(6):
    case(9):
    case(11):printf("Thang %d nam %d co 30 ngay",month,year);break;

    case(2):{
        if ((year%4==0)&&(year%100!=0))
            printf("Thang %d nam %d co 29 ngay",month,year);
        else printf("Thang %d nam %d co 28 ngay",month,year);
        
    }
    break;
    default:cout<<"Thang khong hop le";
        
    }
    return 0;
}
