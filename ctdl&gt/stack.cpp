#include <iostream>

using namespace std;

typedef int T;

struct Stack
{
    T* theArray;    // Con tro toi mang chua cac phan tu
    int topOfStack; // Vi tri cua phan tu nam o dinh ngan xep
};

// Ham khoi tao (capacity la dung luong cua ngan xep)
void stackInit(Stack& stack, int capacity = 100);

// Ham huy
void stackDestroy(Stack& stack);

// Kiem tra ngan xep rong
bool stackIsEmpty(Stack& stack);

// Tra ve kich thuoc cua ngan xep (so phan tu hien co)
int stackGetSize(Stack& stack);

// Chen phan tu e vao dinh ngan xep
void stackPush(Stack& stack, T e);

// Xoa phan tu o dinh ngan xep
void stackPop(Stack& stack);

// Tra ve phan tu o dinh ngan xep (nhung khong xoa)
T stackTop(Stack& stack);

int main()
{
    Stack s;
    stackInit(s);

    // Chen phan tu vao ngan xep
    stackPush(s, 10);
    stackPush(s, 20);
    stackPush(s, 30);

    // In tat ca cac phan tu trong ngan xep
    cout << "Cac phan tu trong ngan xep la: ";
    while (!stackIsEmpty(s))
    {
        cout << stackTop(s) << " ";
        stackPop(s);
    }
    cout << endl;

    // Kiem tra xem ngan xep da rong hay chua
    if (stackIsEmpty(s))
        cout << "Ngan xep da rong." << endl;
    else
        cout << "Ngan xep khong rong." << endl;

    stackDestroy(s);

    return 0;
}

void stackInit(Stack& stack, int capacity)
{
    stack.theArray = new T[capacity]; // Tao mang chua cac phan tu
    stack.topOfStack = -1;           // "= -1" nghia la ban dau ngan xep rong
}

void stackDestroy(Stack& stack)
{
    delete[] stack.theArray; // Xoa mang da duoc cap phat dong trong ham khoi tao
}

bool stackIsEmpty(Stack& stack)
{
    return (stack.topOfStack == -1);
}

int stackGetSize(Stack& stack)
{
    return (stack.topOfStack + 1);
}

void stackPush(Stack& stack, T e)
{
    stack.topOfStack++;
    stack.theArray[stack.topOfStack] = e;
}

void stackPop(Stack& stack)
{
    stack.topOfStack--;
}

T stackTop(Stack& stack)
{
    return stack.theArray[stack.topOfStack];
}
