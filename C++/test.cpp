#include<iostream>

using namespace std;

//b6: nhap mang
// int main()
// {
//     int n;
//     do
//     {
//         cout<<"Nhap n: ";
//         cin>>n;
//     } while (n<0);
//     int arr[n];
//     cout<<"Nhap mang: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Mang vua nhap: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//b7: 

// int main()
// {
//     int n,x;
//     do
//     {
//         cout<<"Nhap n: ";
//         cin>>n;
//     } while (n<0);

//     int arr[n];
//     cout<<"Nhap mang: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Nhap x: ";
//     cin>>x;

//     //xoa phan tu x trong mang
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==x)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 arr[j]=arr[j+1];
//             }
//             n--;
//             i--;
//         }
//     }
    
//     cout<<"Mang sau khi xoa: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//b8:

int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    } while (n<0);
    int arr[n];
    cout<<"Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //dem va tim so lan xuat hien nhieu nhat cua 1 phan tu
    //in ra cac phan tu xuat hien nhieu nhat va so lan xuat hien
    int max=0;
    for (int i = 0; i < n; i++)
    {
        int dem=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                dem++;
            }
        }
        if (dem>max)
        {
            max=dem;
        }
    }
    cout<<"So lan xuat hien nhieu nhat: "<<max<<endl;
    cout<<"Cac phan tu xuat hien nhieu nhat: ";
    for (int i = 0; i < n; i++)
    {
        int dem=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                dem++;
            }
        }
        if (dem==max)
        {
            cout<<arr[i]<<" ";
        }
    }
      
    
    
    return 0;
}
