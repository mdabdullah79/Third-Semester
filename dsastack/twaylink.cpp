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
    Print(1);
    cout<<endl;
    Print(0);
    return 0;
}