#include<iostream>

using namespace std;
//tao cau truc 1 nut
struct Node
{
    int elem;
    Node *next;
};
//dinh nghia con tro nut dau tien
struct List
{
    Node *head;
};
//chen dau list
void addfront(List &list,int emain)
{
    //tao nut moi
    Node *p = new Node;
    //them gia tri vao nut
    p->elem=emain;
    //con tro next tro den &vi tri cua phan tu dau tien
    p->next=list.head;
    //gan con tro head = & cua con tro moi tao
    list.head=p;
}

//xo dau list
void delefront(List &list)
{
    //tao 1 con tro tro toi vi tri not dau tin
    Node *old = list.head;
    //gan vi tri dau la con tro thu2
    list.head=old->next;
    //xoa vung nho con tro old tro toi
    delete old;
    //giai phong con tro old
    old->next = NULL;
}





