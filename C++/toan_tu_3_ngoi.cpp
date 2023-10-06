#include<iostream>

int main(){

    int n;
    std::cin>>n;
    int ket_qua = (n%2==0)?n*2:n*3;
    std::cout<<ket_qua;
    return 0;
}