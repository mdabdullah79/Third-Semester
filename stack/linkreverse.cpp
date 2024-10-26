#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = 0;

void insert(int x){
    if(head == 0){
        head = new Node;
        (*head).data = x;
        (*head).next = 0;
    }else{
        Node *Next;
        Next = new Node;
        (*Next).data = x;
        (*Next).next = 0;

        Node *temp;
        temp = head;
        while((*temp).next!=0){
            temp = (*temp).next;
        }
        (*temp).next = Next;
    }
}

void printlink(){
    Node *temp;
    temp = prev;
        while((*temp).next!=0){
            cout<<(*temp).data<<" ";
            temp = (*temp).next;
        }
        cout<<(*temp).data<<" ";
}
Node* prev = nullptr;
void rev(){
    Node* cur = head;
    Node* next;

    while(cur != nullptr){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next; 

    }

}


int main(){
    insert(20);
    insert(30);
    insert(300);
    rev();
    printlink();



    return 0;
}