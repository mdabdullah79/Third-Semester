#include<bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   int piro;
   Node* next;
};
Node* head = 0;

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
    
    while(n!=nullptr){
        prev = n;
        if(n->piro>piro){
            nn->next = prev->next;
            prev->next = nn;
            return;
        }else if(n->piro==piro){
            nn->next = n->next;
            n->next = nn;
            return;
        }else if(n->next==0){
            nn->next = n->next;
            n->next = nn;
            return;
        }
        n = n->next;
    } 
}

void Print(){
    Node* p = head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main(){
    insert(20,1);
    insert(10,2);
    insert(30,3);
    insert(50,5);
    insert(40,3);
    insert(300,1);
    Print();
    return 0;
}