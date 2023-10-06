#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Hàm thêm phần tử vào cuối danh sách
void addToEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Hàm thêm phần tử vào đầu danh sách
void addToBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Hàm in danh sách
void printList(Node* head) {
    cout << "In danh sach:";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Hàm xóa phần tử ở cuối danh sách
void removeLastElement(Node*& head) {
    cout << "Hay xoa phan tu o cuoi danh sach!" << endl;
    if (head == nullptr) {
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// Hàm in các số chẵn trong danh sách
void printEvenNumbers(Node* head) {
    cout << "Cac so chan trong danh sach: ";
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data % 2 == 0) {
            cout << temp->data << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

// Hàm giải phóng danh sách liên kết
void freeList(Node*& head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n;
    do {
        cout << "Cho n = ";
        cin >> n;
    } while (n < 5);

    Node* head = nullptr;

    for (int i = 0; i < n; i++) {
        int value;
        cout << "Nhap phan tu: ";
        cin >> value;
        addToEnd(head, value);
    }

    printList(head);

    removeLastElement(head);
    printList(head);

    int x;
    cout << "Cho x = ";
    cin >> x;
    addToBeginning(head, x);

    printList(head);

    printEvenNumbers(head);

    // Giải phóng danh sách liên kết
    freeList(head);

    return 0;
}
