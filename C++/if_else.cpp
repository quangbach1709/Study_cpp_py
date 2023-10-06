#include <iostream>

int main(){
    int nam;
    std::cin>>nam;
    if(nam%400==0)
        printf("%d la nam nhuan",nam);
    else if((nam%4=0)&&(nam%10!=0))
            std::cout<<nam<<" là nam nhuan";
         else 
            printf("%d khong phai la nam nhuan",nam);   
    return 0;
}