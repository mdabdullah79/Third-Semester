#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head = 0;
Node* tail = 0;

void addFirst(int item){
    Node* nn = new Node;
    nn->data = item;
    nn->next = head;
    nn->prev = 0;
    if(head == 0) {
        tail = nn;
    }
    if(head != 0) {
        head->prev = nn;
    }
    head = nn;
}
void addLast(int item){
    if(head == 0) {
        addFirst(item);
        return;
    }

    Node* nn = new Node;
    nn->data = item;
    nn->next = 0;
    nn->prev = tail;

    tail->next = nn;
    tail = nn;
}

void Insert(int pos, int item)
{
    
}
void Print(bool ltor) {
    if(ltor) {
        cout << "Printing L to R: ";
        Node* ptr = head;
        while(ptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    else {
        cout << "Printing R to L: ";
        Node* ptr = tail;
        while(ptr) {
            cout << ptr->data << " ";
            ptr = ptr->prev;
        }
    }
    cout << endl;
}
int main()
{
    /// 12 11 10
    addLast(10);
    addLast(11);
    addLast(12);

    Print(1);
    Print(0);
    return 0;
}