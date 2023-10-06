#include<iostream>

using namespace std;


void doi_vi_tri(int &a, int &b)
{
    int temp =a;
    a=b;
    b=temp;
}


void sap_xep_tang_dan(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++) 
        {
            if (arr[i]>arr[j])
            {
                doi_vi_tri(arr[i],arr[j]);
            }
            
        }
        
    }
}


int main()
{
    int n,arr[50];
    cout<<"Nhap so phan tu cua mang la: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" cua mang la: ";
        cin>>arr[i];
    }
    sap_xep_tang_dan(arr,n);
    cout<<"Cac phan tu cua mang sau khi sap xep la: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;


}