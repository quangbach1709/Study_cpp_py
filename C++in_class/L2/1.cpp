#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"N = ";
    cin>>n;
    //in day tu 2n den 3n
    cout<<"Day so:";
    for(int i=2*n;i<=3*n;i++)
    {
        cout<<" "<<i;
    }
    return 0;

}