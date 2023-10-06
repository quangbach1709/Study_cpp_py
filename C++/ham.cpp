#include<iostream>

void sap_xep(int arr[],int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = i +1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            

        }
        
    }
    
}

void input_arr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    
}

void print_arr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
       std::cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[20],n;
    std::cin>>n;
    input_arr(arr,n);
    sap_xep(arr,n);
    print_arr(arr,n);
    return 0;
}