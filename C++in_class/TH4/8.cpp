#include<iostream>

using namespace std;

void input_arr(int n,int m,int arr[][5]);
void sum_arr(int n,int m,int arr1[][5],int arr2[][5]);

int main()
{
    int n,m,arr1[5][5],arr2[5][5];
    do
    {
        cout<<"Nhap hang: ";
        cin>>n;
    } while (n<1||n>5);
    do
    {
        cout<<"NHap cot: ";
        cin>>m;
    } while (m<1||m>5);
    //a
    cout<<"Nhap ma tran A: "<<endl;
    input_arr(n,m,arr1);
    cout<<"Nhap ma tran B: "<<endl;
    input_arr(n,m,arr2);
    //b and c
    sum_arr(n,m,arr1,arr2);
    
    return 0;
}

void input_arr(int n,int m,int arr[][5])
{
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
}

void sum_arr(int n,int m,int arr1[][5],int arr2[][5])
{
    cout<<"Tong cua 2 ma tran C"<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<" "<<arr1[i][j]+arr2[i][j];
        }
        cout<<endl;
    }
}