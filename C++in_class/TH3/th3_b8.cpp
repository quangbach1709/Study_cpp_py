#include<iostream>

using namespace std;

int main()
{
    int n;
    //nhap n
    cout<<"N = ";
    cin>>n;
    //kiem tra n co phai so nguyen to khong
    if (n<2)
    {
        cout<<n<<" khong phai so nguyen to";
    }
    else
    {
        int dem=0;
        for (int i = 2; i <= n/2; i++)
        {
            if (n%i==0)
            {
                dem++;
            }
            
        }
        if (dem==0)
        {
            cout<<n<<" la so nguyen to";
        }
        else
        {
            cout<<n<<" khong phai so nguyen to";
        }
        
    }
    
    return 0;
}