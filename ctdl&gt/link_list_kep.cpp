#include<iostream>

using namespace std;

struct Node
{
    int value;
    Node *next;
    Node *prev;
};

struct DoubleLinkList
{
    Node *head;
    Node *tail;
};

void init(DoubleLinkList &ls)
{
    ls.head=NULL;
    ls.tail=NULL;
}

Node *createNode(int x)
{
    Node *p =new Node;
    p->value=x;
    p->next=NULL;
    p->prev=NULL;

    return p;
}

void addFirst(DoubleLinkList &ls,int x)
{
    Node *p = createNode(x);
    if (ls.head==NULL)
    {
        ls.head=ls.tail=p;
    }
    else
    {
        p->next =ls.head;
        ls.head->prev =p;
        ls.head=p; 
    }
    
}

void addLast(DoubleLinkList &ls,int x)
{
    Node *p =createNode(x);
    if (ls.head ==NULL)
    {
        ls.head =ls.tail=p;
    }
    else
    {
        p->prev =ls.tail;
        ls.tail->next=p;
        ls.tail=p;
    }
}

void addAfter(DoubleLinkList &ls,int v,int x)
{
    Node *q=ls.head;
    while (q!=NULL&&q->value!=v)
    {
        q=q->next;
    }
    
}

void outputLeftToRight(const DoubleLinkList ls)
{
    Node *p =ls.head;
    while (p!=NULL)
    {
        cout<<p->value<<"\t";
        p=p->next;
    }
    
}


void outRightToLeft(const DoubleLinkList ls)
{
    Node *p =ls.tail;
    while (p!=NULL)
    {
        cout<<p->value<<"\t";
        p=p->prev;
    }
    
}

int main()
{
    DoubleLinkList ls;
    init(ls);

    addLast(ls,30);
    addFirst(ls,10);
    addFirst(ls,25);
    addLast(ls,50);

    outputLeftToRight(ls);
    //cout<<"\n";
    //outRightToLeft(ls);
    return 0;
}
