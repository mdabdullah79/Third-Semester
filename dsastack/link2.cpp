#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head=0;

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
void insert(int x,int pos){
    if(pos==1){
        Node *t = new Node;
        (*t).data = x;
        (*t).next = head;
        head = t;
    }else{
    Node *prev = head;
     int ct = 1;
     while(ct<pos-1){
        prev = prev->next;
        ct++;
     }

     Node *temp = new Node;
     (*temp).data = x;
     (*temp).next = prev->next;
      prev->next = temp;
    }
}
void Delete(int pos){
    Node* t;
    Node *prev;
    t = head;
    for(int i=1;i<pos;i++){
        prev = t;
        t = t->next;
    }
    prev->next = t->next;
    delete t;

}
void printlink(){
    Node *temp;
    temp = head;
        while((*temp).next!=0){
            cout<<(*temp).data<<" ";
            temp = (*temp).next;
        }
        cout<<(*temp).data<<" ";
}
int main(){
    
    insert(3);
    insert(30);
    insert(300);
    //insert(200,2);
    Delete(3);
    printlink();
    
    return 0;
}