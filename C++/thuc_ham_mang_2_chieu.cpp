#include<iostream>

int main(){

    int mang[20][20],n,m,sum=0;
    std::cout<<"n = ";
    std::cin>>n;
    std::cout<<"m = ";
    std::cin>>m;

    std::cout<<"Nhap mang: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cin>>mang[i][j];
        }
    }

    std::cout<<"Tong cac gia tri bien la: ";
    for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if((i==0||i==n-1)||(j==0||j==m-1))
                sum+=mang[i][j]; 
            }
    }
    std::cout<<sum;
    return 0;
}