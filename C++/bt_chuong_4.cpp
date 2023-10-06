#include<iostream>

using namespace std;

//bai 1 sap xep giam dan

// void sap_xep_giam_dan(int n,int arr[]);
// void inputArr(int n,int arr[]);
// void output(int n,int arr[]);
// void swap(int &a,int &b);

// int main()
// {
//     int n,arr[10];
//     do
//     {
//         cout<<"n = ";
//         cin>>n;
//     } while (n<2||n>10);

//     inputArr(n,arr);
//     sap_xep_giam_dan(n,arr);
//     output(n,arr);
    
//     return 0;
// }

// void inputArr(int n,int arr[])
// {   
//     cout<<"Nhap mang: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
// }

// void swap(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;

// }

// void sap_xep_giam_dan(int n,int arr[])
// {
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]<arr[j])
//             {
//                 swap(arr[i],arr[j]);
//             }
            
//         }
        
//     }
    
// }

// void output(int n,int arr[])
// {
//     cout<<"Mang sau khi sap xep: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<" "<<arr[i];
//     }
    
// }

//bai 2 tim vij tri phan tu co tong =k

// void inputArr(int n,int arr[]);
// void tim_kiem(int n,int k,int arr[]);

// int main()
// {
//     int n,k,arr[10];
//     do
//     {
//         cout<<"n = ";
//         cin>>n;
//     } while (n<2||n>10);
//     inputArr(n,arr);
//     cout<<"k = ";
//     cin>>k;
    
//     tim_kiem(n,k,arr);

//     return 0;
// }

// void inputArr(int n,int arr[])
// {   
//     cout<<"Nhap mang: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
// }

// void tim_kiem(int n,int k,int arr[])
// {
//     cout<<"Ket qua: ";
//     for (int i = 0; i < n; i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if (arr[i]+arr[j]==k)
//             {
//                 cout<<i<<" "<<j<<endl;
//                 return;
//             }
            
//         }
//     }
    
// }

//bai 3 tong ma tran

// void inputArr(int n,int m,int arr[][10]);
// void sum_Arr(int n,int m,int arr1[][10],int arr2[][10]);

// int main()
// {
//     int n,m,arr1[10][10],arr2[10][10];

//     do
//     {
//         cout<<"n = ";
//         cin>>n;
//     } while (n<0||n>10);
//     do
//     {
//         cout<<"m = ";
//         cin>>m;
//     } while (m<0||m>10);
//     cout<<"Nhap ma tran 1: ";
//     inputArr(n,m,arr1);
//     cout<<"Nhap ma tran 2: ";
//     inputArr(n,m,arr2);
//     sum_Arr(n,m,arr1,arr2);


//     return 0;
// }

// void inputArr(int n,int m,int arr[][10])
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
    
// }

// void sum_Arr(int n,int m,int arr1[][10],int arr2[][10])
// {
//     cout<<"Tong 2 ma tran: "<<endl;
//     for (int i = 0; i <n; i++)
//     {
//         for (int j = 0; j <m; j++)
//         {
//             cout<<" "<<arr1[i][j]+arr2[i][j];
//         }
//         cout<<endl;
//     }
    
// }

//bai 4 tong so le trong ma tran 

void inputArr(int n,int m,int arr[][10]);
int sum_so_le(int n,int m,int arr[][10]);

int main()
{
    int n,m,arr[10][10];
    do
    {
        cout<<"n = ";
        cin>>n;
    } while (n<0||n>10);
    do
    {
        cout<<"m = ";
        cin>>m;
    } while (m<0||m>10);
    cout<<"Nhap ma tran: ";
    inputArr(n,m,arr);
    cout<<"Tong cac so le la: "<<sum_so_le(n,m,arr)<<endl;
    return 0;
}

void inputArr(int n,int m,int arr[][10])
{
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
}
int sum_so_le(int n,int m,int arr[][10])
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if (arr[i][j]%2!=0)
            {
                sum+=arr[i][j];
            }
            
        }
    }
    return sum;
}