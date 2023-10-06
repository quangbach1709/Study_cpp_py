#include<iostream>

using namespace std;

//ham kiem tra so nguyen to
bool nguyen_to(int n)
{
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        else
            return true;
        
    }
    
}

int main()
{
    int n,sum=0,dem=0;
    //nhap n
    cout<<"N = ";
    cin>>n;
    //dieu kien so nguyen to
    while (n<2)
    {
        cout<<"Hay nhap lai n = ";
        cin>>n;
    }
    
    //dem so nguy to
    cout<<"Cac so nguyen to la: ";
    for (int i = 1; i <= n; i++)
    {
        if ((nguyen_to(i)==1)&&(i>=2))
        {
            cout<<i<<"    ";
            sum+=i;
            dem++;
        }
        
    }
    cout<<"\nTong cac so nguyen to la: "<<sum<<endl;
    cout<<"Trung binh cong cac so nguyen to la: "<<(float)(sum/dem);
    
    return 0;
}