#include<iostream>
#include<vector>

using namespace std;

typedef int T; //khai báo kiểu dữ liệu cho phần tử

struct Vector
{
    int size; // số phần tử hiện có
    int capacity; // số phần tử tối đa có thể chứa
    T* array; // con trỏ tới mảng chứa các phần tử
};

void vecInit(Vector& vec, int initCapacity)
{
    vec.size = 0;
    vec.capacity = initCapacity;
    vec.array = new T[vec.capacity];
}

void vecExpand(Vector& vec, int newCapacity)
{
    if (newCapacity <= vec.size)
        return;

    T* old = vec.array;
    vec.array = new T[newCapacity];
    for (int i = 0; i < vec.size; i++)
        vec.array[i] = old[i];
    delete[] old;

    vec.capacity = newCapacity;
}

void vecInsert(Vector& vec, int pos, T newElement)
{
    if (vec.size == vec.capacity)
        vecExpand(vec, 2 * vec.capacity);

    if (pos > vec.size)
        return;

    for (int i = vec.size; i > pos; i--)
        vec.array[i] = vec.array[i - 1];

    vec.array[pos] = newElement;

    vec.size++;
}

// lấy dung lượng tối đa
int vecGetCapacity(Vector& vec)
{
    return vec.capacity;
}

void vecDestroy(Vector& vec)
{
    delete[] vec.array;
}

void vecPushBack(Vector& vec, T newElement)
{
    if (vec.size == vec.capacity)
        vecExpand(vec, 2 * vec.capacity);

    vec.array[vec.size] = newElement;

    vec.size++;
}

int main()
{
    Vector vec;
    vecInit(vec, 5); // Khởi tạo với dung lượng ban đầu là 5

    vecInsert(vec, 0, 2); // Chèn phần tử 2 vào vị trí 0

    vecPushBack(vec, 1);
    vecPushBack(vec, 4);
    vecPushBack(vec, 5);
    vecPushBack(vec, 7);
    vecPushBack(vec, 9);

    cout<<"Cac phan tu trong mang: ";
    for (int i = 0; i < vec.size; i++) 
    {
        cout << vec.array[i] << " ";
    }
    cout << endl;
    cout<<"Dung luong cua vector la: ";
    cout << vecGetCapacity(vec) << endl;

    vecDestroy(vec);
    return 0;
}
