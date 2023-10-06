#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<int>&arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"So thu "<<i+1<<": ";
        cin>>x;

        arr.push_back(x);
    }
    
}

void xuat(vector<int>arr)
{
    cout<<"\nIn day so:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void max_min(vector<int>arr)
{
    int max=arr[0],min=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<"\nSo max = "<<max<<", so min = "<<min<<endl;
}

bool so_nguy_to(int n)
{
    if (n<2)
    {
        return 0;
    }
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}

void dem_nguyen_to(vector<int>arr)
{
    int dem=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (so_nguy_to(arr[i]))
        {
            dem++;
        }
        
    }
    cout<<"Day co "<<dem<<" so nguyen to."<<endl;
}

void tbc(vector<int>arr)
{
    int tong=0;
    float tbc=0;
    for (int i = 0; i < arr.size(); i++)
    {
        tong+=arr[i];
    }
    tbc=(tong*1.0/arr.size()-1);
    cout<<"TBC day so: "<<tbc<<endl;
}

int main()
{
    int n;
    do
    {
        cout<<"Nhap n = ";
        cin>>n;
    } while (n<=0||n>=100);
    vector<int>arr;
    nhap(arr,n);
    xuat(arr);
    max_min(arr);
    dem_nguyen_to(arr);
    tbc(arr);
    return 0;
}