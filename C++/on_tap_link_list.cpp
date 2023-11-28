#include<iostream>

using namespace std;

struct Node
{
    int date;
    Node *next;
};

struct List
{
    Node* head;
};

void addFront(List &list,int e)
{
    Node *tmp = new Node;
    tmp->date=e;
    tmp->next =list.head;
    list.head=tmp;
}

void addEnd(List &list,int e)
{
    Node *tmp = new Node;
    tmp->date=e;
    tmp->next =NULL;
    if(list.head==NULL)
    {
        list.head=tmp;
    }
    else
    {
        Node *p = list.head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=tmp;
    }
}

void printList(List list)
{
    Node *p = list.head;
    while(p!=NULL)
    {
        cout<<p->date<<" ";
        p=p->next;
    }
}

int main()
{
    List list;
    list.head=NULL;
    while(1)
    {
        int x;
        cout<<"Nhap phan tu (0 de thoat): ";
        cin>>x;
        if(x==0)
        {
            break;
        }
        addEnd(list,x);
    }
    printList(list);
    return 0;
}

