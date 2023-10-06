#include<iostream>

using namespace std;

int main()
{
    int n,sum=0,temp=0;
    cout<<"N = ";
    cin>>n;
    //tim so m lon nhat sao cho 1+2+3+...+m<n
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        if(sum>=n)
        {
            temp=i-1;
            break;
        }
    }
    cout<<"m lon nhat = "<<temp<<endl;
    return 0;

}