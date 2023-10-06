#include<iostream>

using namespace std;

struct Node
{
    int value;
    Node *next;
};

void init(Node* &head)
{
    head =NULL;
}

Node* createNode(int x)
{
    Node *p =new Node;
    p->value=x;
    p->next=NULL;

    return p;
}

void addfirst(Node* &head,int x)
{
    Node *p=createNode(x);
    p->next =head;
    head =p;
}

void addlast(Node* &head,int x)
{
    Node *p=createNode(x);
    if (head!=NULL)
    {
        //xac dinh node last
        Node *last =head;
        while (last->next!=NULL)
        {
            last= last->next;
        }
        //chan vao cuoi
        last->next=p;
    }
    else
        head=p;
}

void addAfter(Node *head,int v,int x)
{
    Node *p= createNode(x);
    //tim node co gia tri v
    Node *q =head;
    while (q != NULL && q->value !=v)
    {
        q=q->next;
    }
    //q la node dai dien cho v tren danh sach lien ket
    if (q!=NULL)//trong danh sach co phan tu v
    {
        p->next = q->next;
        q->next =p;
    }
}

void deleteFirst(Node * &head)
{
    if (head!=NULL)
    {
        Node *p =head;
        head =p->next;
        p->next=NULL;
        delete(p);
    }
}

void deleteLast(Node *&head)
{
    if(head!=NULL)
    {
        Node *last=head;
        Node *prev=NULL;
        while (last->next!=NULL)
        {   
            prev=last;
            last=last->next;
        }
        if (prev==NULL)
        {
            deleteFirst(head);
            //last->next=NULL;
            //delete(last);
        }
        else
        {
            prev->next =NULL;
            delete(last);
        }
        
        
    
    }
}

void deleteNode(Node *&head,int v)
{
    if (head!=NULL)
    {
        Node *p =head;
        Node *prev =NULL;
        while (p!=NULL && p->value !=v)
        {
            prev =p;
            p=p->next;
        }
        
        if (p!=NULL)//tim thay phan tu can xoa
        {
            if (prev ==NULL)
                {
                    deleteFirst(head);
                }
            else
                {
                    prev->next =p->next;
                    p->next =NULL;
                    delete(p);
                }
        }
        
        
    }
    
}

void clear(Node *&head)
{
    while (head!=NULL)
    {
        deleteFirst(head);
    }
    
}

void output(Node*head) 
{
    Node *p=head;
    while (p!=NULL)
    {
        cout<<p->value<<"\t";
        p=p->next;
    }
    
}

int main()
{
    Node *head;
    
    init(head);

    addfirst(head,10);
    addfirst(head,15);
    addfirst(head,9);

    addlast(head,99);

    addAfter(head,10,11);
    //deleteFirst(head);
    //deleteLast(head);
    //deleteNode(head,100);
    output(head);
    cout<<endl;

    clear(head);
    if (head ==NULL)
    {
        cout<<"Danh sach rong.";
    }
    
    return 0;
}