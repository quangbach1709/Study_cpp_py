#include<iostream>
using namespace std;
int main(){

    int n;
    char mang[20];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>mang[i];
    }

    for (int i = n-1; i > 0; i--)
    {
        for(int j=0;j<i;j++){
            if (mang[j]>mang[j+1])
            {
                char tmp=mang[j];
                mang[j]=mang[j+1];
                mang[j+1]=tmp;
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<mang[i]<<" ";
    }
    
    
    return 0;
}