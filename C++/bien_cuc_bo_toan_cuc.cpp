#include <iostream>

int global_var =1;

int main(){
    int global_var =2;
    std::cout<<"Bien cuc bo: "<<global_var<<"\n";
    {
        std::cout<<"Cum 1: "<<::global_var<<"\n";
    }
    {
        std::cout<<"Cum 2: "<<global_var;
    }
}