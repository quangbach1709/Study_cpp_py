#include <iostream>

using namespace std;

//bai 1 giai phuong trinh ax+b=0

// int main()
// {
//     float a,b;

//     cout<<"a = ";
//     cin>>a;
//     cout<<"b = ";
//     cin>>b;

//     if (a==0 && b==0)
//     {
//         cout<<"Phuong trinh vo so ngiem"<<endl;
//     }
//     else if (a==0)
//     {
//         cout<<"Phuong trinh co vo so nghiem"<<endl;
//     }
//     else
//     {
//         cout<<"Nghiem cua phuong trinh la: "<<(-b/a)<<endl;
//     }
    
    

//     return 0;
// }

//bai 2 tong cac so nguyen le nho hon 100

// int main()
// {
//     int sum=0,n;
//     do
//     {
//         cout<<"n = ";
//         cin>>n;
//     } while (n<0 || n>100);
    
//     for (int i = 0; i < n; i++)
//     {
//         if (i%2!=0)
//         {
//             sum+=i;
//         }
        
//     }
//     cout<<"Ket qua la: "<<sum;

//     return 0;
// }

//bai 3 chuyen do F thaanh do C

// int main()
// {
//     int f;
//     cout<<"F = ";
//     cin>>f;

//     cout<<"C = "<<(float)(f-32)/1.8<<endl;

//     return 0;
// }

//bai 4 kiem tra so nguyen to

// bool kiem_tra_so_nguyem_to(int n);
// int main()
// {
//     int n;
//     cout<<"n = ";
//     cin>>n;

//     if (kiem_tra_so_nguyem_to(n))
//     {
//         cout<<"n la so nguyen to."<<endl;
//     }
//     else
//         cout<<"n khong la so nguyen to"<<endl;
    
//     return 0;
// }

// bool kiem_tra_so_nguyem_to(int n)
// {
    
//     if (n<2)
//     {
//         return false;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n%i==0)
//             {
//                 return false;
//             }
            
//         }
//         return true;
//     }  
// }

//bai 5 tong cac chu so

void tinh_tong(int n);

int main()
{
    int n;
    do
    {
        cout<<"n = ";
        cin>>n;
    } while (n<0);
    

    tinh_tong(n);

    return 0;
}

void tinh_tong(int n)
{
    int sum=0;
    while (n!=0)
    {
        sum= sum+ n%10;
        n= n/10;
    }
    cout<<"Ket qua la: "<<sum;
}