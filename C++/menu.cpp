#include<iostream>
#include<string>

using namespace std;

struct Product
{
    string name;
    int price;
    int quantity;

    friend istream& operator>>(istream &is, Product &product)
    {
        cout<<"Nhap ten san pham: ";
        is.ignore();
        getline(is, product.name);
        cout<<"Nhap gia san pham: ";
        is>>product.price;
        cout<<"Nhap so luong san pham: ";
        is>>product.quantity;
        return is;
    }

    friend ostream& operator<<(ostream &os, Product &product)
    {
        os<<"Ten san pham: "<<product.name<<endl;
        os<<"Gia san pham: "<<product.price<<endl;
        os<<"So luong san pham: "<<product.quantity<<endl;
        return os;
    }
};

int show_menu();
void print_products(Product *products,int size);
void add_product(Product* &products,int &size);
void delete_product(Product* &products,int &size);

int main()
{
    int size=0;
    Product *products=new Product[size];
    while (true)
    {
        int chose =show_menu();
        system("cls");
        switch (chose)
        {
            case 1:
                //xem danh sach
                print_products(products,size);
                break;
            case 2:
                //tham san pham
                add_product(products,size);
                break;
            case 3:
                //xoa san pham 
                delete_product(products,size);
                break;
            case 0:
                cout<<"Cam on quy khach!";
                return 0;
            default:
                cout<<"Lua chonj k hop le."<<endl;
            
        }

        cout<<"Ban co muon tiep tuc k?(1 or 0)";
        bool is_continue;
        cin>>is_continue;
        if (!is_continue)
        {
            cout<<"Cam on quy khach!";
            break;
        }
        
    }
    

    return 0;
}

int show_menu()
{
    system("cls");
    int chose;
    cout<<"-----Menu-----"<<endl;
    cout<<"1.xem danh sach san pham "<<endl;
    cout<<"2.Them san pham moi "<<endl;
    cout<<"3.Xoa san pham "<<endl;
    cout<<"0.Thoat chuong trinh "<<endl;

    cout<<"Lua chon cua ban la: ";
    cin>>chose;
    return chose;
}

void print_products(Product *products,int size)
{
    if (!size)
    {
        cout<<"Chua co san pham nao.";
    }
    else
    {
        cout<<"Danh sach san pham: ";
        for (int i = 0; i < size; i++)
        {
            cout<<products[i]<<endl;
        }
        
    }
}

void add_product(Product* &products,int &size)
{
    Product new_product;
    cout<<"Nhap san pham moi: "<<endl;
    cin>>new_product;
    int new_size =size+1;
    Product *tmp =new Product[new_size];

    for (int i = 0; i < size; i++)
    {
        tmp[i]=products[i];
    }

    tmp[new_size-1]=new_product;
    delete[] products;
    products=tmp;
    size=new_size;

    cout<<"Them san pham thanh cong."<<endl;
}

void delete_product(Product* &products,int &size)
{
    string delete_name;
    cout<<"Nhap ten san pham can xoa: ";
    cin.ignore();
    getline(cin,delete_name);

    int delete_index=-1;
    for (int i = 0; i < size; i++)
    {
        if (!delete_name.compare(products[i].name))
        {
            delete_index=i;
            break;
        }
        
    }
    
    if (delete_index==-1)
    {
        cout<<"Khong tim thay san pham!"<<endl;
        return;
    }
    
    for (int i = delete_index; i < size-1; i++)
    {
        products[i]=products[i+1];
    }
    size--;
    Product *tmp = new Product[size];
    for (int i = 0; i < size; i++)
    {
        tmp[i]=products[i];
    }
    
    delete[] products;
    products=tmp;
    
    cout<<"Xoa thanh cong!"<<endl;
}