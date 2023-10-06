#include<iostream>
#include<cmath>

using namespace std;

void input_arr(int n,int m,float arr[][10]);
void output_arr(int n,int m,float arr[][10]);
void so_luong_phan_tu_duong_am(int n,int m,float arr[][10]);
void tong_trung_binh_cong_hang_dau(int n,int m,float arr[][10]);
void so_phan_tu_chan_cot_cuoi(int n,int m,float arr[][10]);
void doi_vi_tri_dau_hang_cuoi_hang(int n,int m,float arr[][10]);
void swap(float &a,float &b);

int main()
{
    int n,m;
    float arr[10][10];
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
    output_arr(n,m,arr);
    //b
    so_luong_phan_tu_duong_am(n,m,arr);
    //c
    tong_trung_binh_cong_hang_dau(n,m,arr);
    //d
    so_phan_tu_chan_cot_cuoi(n,m,arr);
    //e
    doi_vi_tri_dau_hang_cuoi_hang(n,m,arr);

    return 0;
}

void input_arr(int n,int m,float arr[][10])
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

void output_arr(int n,int m,float arr[][10])
{
    cout<<"Ma tran la: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }
}

void so_luong_phan_tu_duong_am(int n,int m,float arr[][10])
{
    int dem_duong=0,dem_am=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if (arr[i][j]>=0)
            {
                dem_duong++;
            }
            else
                dem_am++;
            
        }
    }
    cout<<"So phan tu duong trong mang la: "<<dem_duong<<endl;
    cout<<"So phan tu am trong mang la : "<<dem_am<<endl;
}

void tong_trung_binh_cong_hang_dau(int n,int m,float arr[][10])
{
    float sum=0;
    for (int i = 0; i < m; i++)
    {
        sum+=arr[0][i];
    }
    cout<<"Tong cac phan tu hang dau la: "<<sum<<endl;
    cout<<"Trung binh cong cac phan tu hang dau la: "<<sum/m<<endl;
}

void so_phan_tu_chan_cot_cuoi(int n,int m,float arr[][10])
{
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][m-1]==floor(arr[i][m-1]))
        {
            if ((int)(arr[i][m-1])%2==0)
        {
            dem++;
        }
        }
        
    }
    cout<<"So phan tu chan hang cuoi la: "<<dem<<endl;
}

void doi_vi_tri_dau_hang_cuoi_hang(int n,int m,float arr[][10])
{
    float tmp;
    for (int i = 0; i < m; i++)
    {
        swap(arr[0][i],arr[n-1][i]);
    }
    cout<<"Ma tran sau khi hoan doi vi tri :"<<endl;
    output_arr(n,m,arr);
}
void swap(float &a,float &b)
{
    float tmp =a;
    a=b;
    b=tmp;
}