#include<iostream>

using namespace std;

bool nam_nhuan(int n)
{
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
        
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
    if(nam_nhuan(n))
    {
        cout<<n<<" la nam nhuan";
    }
    else
    {
        cout<<n<<" khong phai nam nhuan";
    }
    return 0;
}