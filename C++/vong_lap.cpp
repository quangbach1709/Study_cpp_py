#include<iostream>

int main(){

    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i%5==0)
            std::cout<<i<<" ";
    }
    return 0;
}