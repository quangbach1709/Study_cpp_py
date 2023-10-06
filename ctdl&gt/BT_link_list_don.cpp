#include <iostream>
#include <string>

using namespace std;

struct HocVien
{
    int maHv;
    string tenHv;
    int namSing;
};

struct NodeHv
{
    HocVien hv;
    NodeHv *next;
};

void outputHv(HocVien h)
{
    cout << "Ma Hv: " << h.maHv << endl;
    cout << "Ten Hv: " << h.tenHv << endl;
    cout << "Nam sinh Hv: " << h.namSing << endl;
}

void init(NodeHv *&head)
{
    head = NULL;
}

void inputHv(HocVien& x)
{
    cout << "Nhap ma Hv: ";
    cin >> x.maHv;
    cin.ignore();
    cout << "Nhap ten Hv: ";
    getline(cin, x.tenHv);
    cout << "Nhap nam sinh Hv: ";
    cin >> x.namSing;
}

NodeHv* creatNode(HocVien x)
{
    NodeHv* p = new NodeHv;
    p->hv = x;
    p->next = NULL;
    return p;
}

void addFirst(NodeHv*& head, HocVien x)
{
    NodeHv* p = creatNode(x);
    p->next = head;
    head = p;
}

void output(NodeHv* head)
{
    NodeHv* p = head;
    while (p != NULL)
    {
        outputHv(p->hv);
        p = p->next;
    }
}

int main()
{
    HocVien x;
    inputHv(x);

    NodeHv* head;
    init(head);

    addFirst(head, x);
    output(head);
    return 0;
}
