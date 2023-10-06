#include<iostream>
using namespace std;
int main(){

    int mang[20],n,x,y;
    cout<<"N = ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<" phan tu thu"<<i+1<<" la ";
        cin>>mang[i];
    }

    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    n++;

    for(int i=n;i>x;i--){
        mang[i]=mang[i-1];
    }
    mang[x]=y;
    cout<<" sau them la: ";
    for(int i=0;i<n;i++){
        cout<<mang[i]<<" ";
    }
    return 0;
}