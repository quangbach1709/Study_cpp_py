#include<iostream>

using namespace std;

void input_arr(int n,int m,int arr[][10]);
void print_chan(int n,int m,int arr[][10]);
void print_chia_3(int n,int m,int arr[][10]);
void max_and_min_cot_cuoi(int n,int m,int arr[][10]);
void sum_le_dong_dau(int n,int m,int arr[][10]);

int main()
{
    int n,m,arr[10][10];
    do
    {
        cout<<"Nhap hang: ";
        cin>>n;
    } while (n<2||n>10);
    do
    {
        cout<<"Nhap cot: ";
        cin>>m;
    } while (m<2||m>10);

    input_arr(n,m,arr);
    //a
    print_chan(n,m,arr);
    //b
    print_chia_3(n,m,arr);
    //c
    max_and_min_cot_cuoi(n,m,arr);
    //d
    sum_le_dong_dau(n,m,arr);

    return 0;
}

void input_arr(int n,int m,int arr[][10])
{
    cout<<"Nhap ma tran: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
}

void print_chan(int n,int m,int arr[][10])
{
    cout<<"Cac phan tu duong chan la: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if (arr[i][j]%2==0&&arr[i][j]>0)
            {
                cout<<arr[i][j]<<endl;
            }
            
        }
    }
}

void print_chia_3(int n,int m,int arr[][10])
{
    cout<<"Cac so chia het cho 3 la:";
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if (arr[i][j]%3==0)
            {
                cout<<" "<<arr[i][j];
            }
        }
        cout<<endl;
    }
}

void max_and_min_cot_cuoi(int n,int m,int arr[][10])
{
    int max,min;
    max=min=arr[0][m-1];
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i][m-1])
        {
            max=arr[i][m-1];
        }
        else if (min>arr[i][m-1])
        {
            min=arr[i][m-1];
        }
        
    }
    cout<<"\nGia tri lon nhat cua cot cuoi la: "<<max<<endl;
    cout<<"Gia tri nho nhat cua cot cuoi la: "<<min<<endl;
}

void sum_le_dong_dau(int n,int m,int arr[][10])
{
    int sum=0;
    for (int i = 0; i < m; i++)
    {
        if (arr[0][i]%2!=0)
        {
            sum+=arr[0][i];
        }
        
    }
    cout<<"Tong cac phan tu co gia tri le tren dong dau tien: "<<sum<<endl;
}