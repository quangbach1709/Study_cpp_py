#include<iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

void insert_tree(node *& root,int e)
{
    if (root==NULL)
    {
        root=new node;
        root->data=e;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        if (e<root->data)
        {
            insert_tree(root->left,e);
        }
        else if (e>root->data)
        {
            insert_tree(root->right,e);
        }
        else
            return;
    }
    
}

//duyet truoc

void duyet_truoc(node *& root)
{
    if (root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<"\t";
        duyet_truoc(root->left);
        duyet_truoc(root->right);
    }
    
}

void duyet_sau(node *& root)
{
    if (root ==NULL)
    {
        return;
    }
    else
    {
        duyet_sau(root->left);
        duyet_sau(root->right);
        cout<<root->data<<"\t";
    }
    
}

void duyet_giam(node *& root)
{
    if (root==NULL)
    {
        return;
    }
    else
    {
        duyet_giam(root->left);
        cout<<root->data<<"\t";
        duyet_giam(root->right);
    }
}

//xoa tat ca

void xoa_cay(node *& root)
{
    if (root==NULL)
    {
        return;
    }
    xoa_cay(root->left);
    xoa_cay(root->right);
    delete root;
}

//tim kiem nut x
node *timKiem(node *& root, int x)
{
    if (root==NULL)
    {
        return NULL;
    }
    else
    {
        if (root->data==x)
        {
            return root;
        }
        else if (x<root->data)
        {
            timKiem(root->left,x);
        }
        else
            timKiem(root->right,x);
    }
}

//dem so nut trong cay
int sonut(node *& root)
{
    if (root==NULL)
    {
        return 0;     
    }
    else
    {
        return (sonut(root->left))+(sonut(root->right))+1;
    }  
}

int sonutla(node *& root)
{
    if (root==NULL)
    {
        return 0;
    }
    else if ((root->left==NULL)&&(root->right==NULL))
    {
        return 1;
    }
    else
    {
        return (sonutla(root->left)+sonutla(root->right));
    }
    
    
}

// dem so nut cha co du 2 con

int sonutChadu(node *& root)
{
    if (root==NULL || ((root->left==NULL)&&(root->right==NULL)))
    {
        return 0;
    }
    else if (root->left!=NULL&&root->right!=NULL)
    {
        return sonutChadu(root->left)+sonutChadu(root->right)+1;
    }
    else if (root->left==NULL&&root->right!=NULL)
    {
        return sonutChadu(root->right);
    }
    else
    {
        return sonutChadu(root->left);
    }
}

void tim_kiem_nut(node *& root,int x)
{
    node *p=timKiem(root,x);
    if(p==NULL)
    {
        cout<<"khong tim thay nut "<<x<<" trong cay"<<endl;
    }
    else
        cout<<"tim thay nut "<<x<<" trong cay"<<endl;
}

int main()
{
    node *root;
    root=NULL;
    insert_tree(root,1);
    insert_tree(root,2);
    insert_tree(root,3);
    insert_tree(root,4);
    insert_tree(root,5);
    insert_tree(root,6);
    insert_tree(root,7);
    insert_tree(root,8);
    insert_tree(root,9);

    // cout<<"Dia tri nut goc: ";
    // cout<<root;
    
    duyet_truoc(root);
    cout<<"\n";
    duyet_sau(root);
    cout<<"\n";
    duyet_giam(root);
    cout<<"\n";

    tim_kiem_nut(root,5);
    tim_kiem_nut(root,10);

    cout<<"\nso nut trong cay: "<<sonut(root);
    cout<<"\nso nut la trong cay: "<<sonutla(root);
    cout<<"\nso nut cha co du 2 con: "<<sonutChadu(root);
    xoa_cay(root);
    insert_tree(root,20);
    insert_tree(root,15);
    
    return 0;
    
}