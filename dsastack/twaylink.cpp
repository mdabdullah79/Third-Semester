#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

};

Node* head = 0;
Node* tail = 0;

void addfirst(int x){
    Node* nn = new Node;
    nn->data = x;
    nn->next = head;
    nn->prev = 0;

    if(head==0){
        tail = nn;
    }
    if(head != 0){
        head->prev = nn;
    }
    head = nn;
}

void addlast(int x){
    if(head==0){
        addfirst(x);
    }
    Node* nn = new Node;
    nn->data = x;
    nn->prev = tail;
    nn->next = 0;

    tail->next = nn;
    tail = nn;
    
}

void Insert(int pos,int x){
     Node* nm =head;
     Node* preve;
      for(int i=1;i<pos;i++){
        preve = nm;
        nm = nm->next;
    }
    Node* nn = new Node;
    nn->data = x;
    nn->next = preve->next;
    preve->next = nn;
    nn->prev = preve->prev;
    

}

void Print(bool x){
    if(x){
        cout<<"L to R: ";
        Node* print = head;
        while(print->next){
            cout<<print->data<<" ";
            print = print->next;
        }
        cout<<print->data<<" ";
    }else{
            cout<<"R to L: ";
             Node* print = tail;
        while(print->prev){
            cout<<print->data<<" ";
            print = print->prev;
        }
        cout<<print->data<<" ";
    }
}

void Del(int pos){
    if(pos == 1){
        Node* nn = head;
        head = head->next;
        head->prev = 0;
        delete nn;
    }else{
        Node* nn = head;
        Node* preve;
        Node* rear;
        for(int i=1;i<pos;i++){
            preve = nn;
            nn = nn->next;
        }
        rear = nn;
        nn = nn->next;
        preve->next = nn;
        nn->prev = rear->prev;
        delete rear;
    }
}

// void addlast(int x){

//     if(head == 0){
//         addfirst(x);
//     }
//     Node* nn = new Node;
//     nn->data = x;
//     nn->next = 0;
//     nn->prev = tail;

//     tail->next = nn;
//     tail = nn;

// }

int main(){

    addfirst(20);
    addfirst(22);
    addfirst(26);
    addfirst(27);
    addfirst(29);
    addfirst(28);
    Print(1);
    cout<<endl;
    Del(3);
    Print(1);

    // Insert(3,10);
    // Print(1);
    return 0;
}