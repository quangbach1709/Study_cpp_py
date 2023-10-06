#include <iostream>

using namespace std;

typedef int T;

struct Node
{
    T elem;
    Node* next;
};

struct Queue
{
    Node* front;
    Node* back;
    int size;
};

// Khoi tao hang doi
void queueInit(Queue& q);

// Huy hang doi
void queueDestroy(Queue& q);

// Kiem tra hang doi co dang rong hay khong
bool queueIsEmpty(Queue& q);

// Lay kich thuoc (so phan tu hien co) cua hang doi
int queueGetSize(Queue& q);

// Them phan tu e vao cuoi hang doi
void enqueue(Queue& q, T e);

// Xoa phan tu o dau hang doi va tra ve phan tu do
T dequeue(Queue& q);

// In tat ca cac phan tu trong hang doi len man hinh
void printQueue(Queue& q);

// Kiem tra x co trong hang doi hay khong
bool isInQueue(Queue& q, T x);

//in phan tu 2
void print2(Queue& q);

int main()
{
    Queue q;
    queueInit(q);

    // Them phan tu vao hang doi
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    print2(q);

    // In tat ca cac phan tu trong hang doi
    cout << "Cac phan tu trong hang doi la: ";
    printQueue(q);

    // Kiem tra x co trong hang doi hay khong
    T x;
    cout << "Nhap vao gia tri x can kiem tra: ";
    cin >> x;
    if (isInQueue(q, x))
        cout << "Gia tri " << x << " co trong hang doi." << endl;
    else
        cout << "Gia tri " << x << " khong co trong hang doi." << endl;

    // Rut tung phan tu ra khoi hang doi cho den khi hang doi rong
    while (!queueIsEmpty(q))
    {
        T element = dequeue(q);
        //cout << "Phan tu duoc rut ra: " << element << endl;
    }

    // Kiem tra xem hang doi da rong hay chua
    if (queueIsEmpty(q))
        cout << "Hang doi da rong." << endl;
    else
        cout << "Hang doi khong rong." << endl;

    return 0;
}

// Khoi tao hang doi
void queueInit(Queue& q)
{
    q.front = NULL;
    q.back = NULL;
    q.size = 0;
}

// Huy hang doi
void queueDestroy(Queue& q)
{
    while (!queueIsEmpty(q))
    {
        dequeue(q);
    }
}

// Kiem tra hang doi co dang rong hay khong
bool queueIsEmpty(Queue& q)
{
    return (q.size == 0);
}

// Lay kich thuoc (so phan tu hien co) cua hang doi
int queueGetSize(Queue& q)
{
    return q.size;
}

// Them phan tu e vao cuoi hang doi
void enqueue(Queue& q, T e)
{
    Node* v = new Node;
    v->elem = e;
    v->next = NULL;

    if (q.size == 0)
        q.front = q.back = v;
    else
    {
        q.back->next = v;
        q.back = v;
    }

    q.size++;
}

// Xoa phan tu o dau hang doi va tra ve phan tu do
T dequeue(Queue& q)
{
    T e = q.front->elem;
    Node* v = q.front;

    if (q.size == 1)
        q.front = q.back = NULL;
    else
        q.front = q.front->next;

    delete v;
    q.size--;

    return e;
}

// In tat ca cac phan tu trong hang doi len man hinh
void printQueue(Queue& q)
{
    Node* current = q.front;
    while (current != NULL)
    {
        cout << current->elem << " ";
        current = current->next;
    }
    cout << endl;
}

// Kiem tra x co trong hang doi hay khong
bool isInQueue(Queue& q, T x)
{
    Node* current = q.front;
    while (current != NULL)
    {
        if (current->elem == x)
            return true;
        current = current->next;
    }
    return false;
}

void print2(Queue& q)
{
    Node *thu2 = q.front;
    cout<<"Phan tu thu 2 la: "<<thu2->elem<<endl;
}
