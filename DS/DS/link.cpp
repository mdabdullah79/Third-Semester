#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head = 0;
int sz = 0;
Node* insert(int x, Node *start){

    if(head == 0){
        head = new Node;
        head->data = x;
        head->next = 0;
        sz++;
    }else{
        Node* temp = new Node;
        temp->data = x;
        temp->next = 0;

        Node* t = head;
        while(t->next!=0){
            t = t->next;
        }
        t->next = temp;
        sz++;
    }
}
void insert(int pos,int x){
    if(pos == 1){
        Node* temp = new Node;
        temp->data = x;
        temp->next = head;
        head = temp;
        sz++;

    }else{
        Node* t = head;
    Node* prev;
    for(int i=1;i<pos-1;i++){
        t = t->next;
    }
    Node* temp;
    temp = new Node;
    temp->data = x;
    temp->next = t->next;
    t->next = temp;
    sz++;
    }
    
    
}
void Del(int pos){
    if(sz==0){return;    }
    else if(pos==1){
        Node *del = head;
        head = head->next;
        delete del;
        sz--;
    }else{
          Node *del;
    del = head;
    Node* prev;
    for(int i = 1;i<pos;i++){
        prev = del;
        del = del->next;
    }
    prev->next = del->next;
    delete del;
    sz--;
    }
}
  
void print(){
    Node* print;
    print = head;
    while(print->next!=0){
        cout<<print->data<<" ";
         print = print->next;
    }
    cout<<print->data<<" ";
}
int main(){
    insert(10);
    insert(112);
    insert(11);
      print();
    cout<<endl;
    insert(4,50);
    print();
      cout<<endl;
      cout<<"size: "<<sz<<endl;


    return 0; 
}
