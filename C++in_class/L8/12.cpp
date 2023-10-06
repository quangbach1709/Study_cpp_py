#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void nhap(vector<int>&arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"Phan tu thu "<<i+1<<": ";
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

void max(vector<int>arr)
{
    int max=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    cout<<"\nSo max = "<<max<<endl;
}

bool so_chinh_phuong(int n)
{
    if (sqrt(n)*sqrt(n)==n)
    {
        return 1;
    }
    return 0;
}

void max_chinh_phuong(vector<int>arr)
{
    int max=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (so_chinh_phuong(arr[i]))
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
            
        }
        
    }
    cout<<"So chinh phuong lon nhat: "<<max<<endl;
}

int main()
{
    int n;
    do
    {
        cout<<"So phan tu n = ";
        cin>>n;
    } while (n<=0||n>=20);
    vector<int>arr;
    nhap(arr,n);
    xuat(arr);
    max(arr);
    max_chinh_phuong(arr);
    return 0;
}