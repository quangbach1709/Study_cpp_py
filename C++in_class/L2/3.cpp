#include<iostream>

using namespace std;

bool so_chia_het_cho_3(int n)
{
    if (n%3==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int n;
    cout<<"N = ";
    cin>>n;
    //in day tu n den 2n
    cout<<"Cac so chia het cho 3 trong khoang N den 2N:";
    for(int i=n;i<=2*n;i++)
    {
        if (so_chia_het_cho_3(i))
        {
            cout<<" "<<i;
        }
        
    }
    return 0;

}