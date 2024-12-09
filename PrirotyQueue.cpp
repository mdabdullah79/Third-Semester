#include<bits/stdc++.h>
using namespace std;

class PriorityQueue{
    struct Node
    {
        int data;
        int piro;
        Node* next;
    };
    Node* head;
   void insert(int item,int piro){
    Node* nn = new Node;
    nn->data = item;
    nn->piro = piro;
    nn->next = 0;
    if(head == 0){
        head = nn;
        return;
    }
    Node* n = head;
    Node* prev;
    if(n->piro>piro){
        nn->next = n;
        head = nn;
        return;
    }
    while(n!=nullptr && n->piro<=piro){
        n = n->next;
    }
    nn->next = n->next;
    n->next = nn; 
    return;
}
    public:
    PriorityQueue(){
        head = 0;
    }
    void Push(int item,int piro){
        insert(item,piro);
    }

    void Display(){
        Node* dis = head;
        while (dis!=nullptr)
        {
            cout<<dis->data<<" ";
            dis = dis->next;
        }
        
    }
};

int main(){
    PriorityQueue cq;
    cq.Push(15,4);
    cq.Push(10,3);
    cq.Push(11,1);
    cq.Push(12,2);
    cq.Display();

    return 0;
}