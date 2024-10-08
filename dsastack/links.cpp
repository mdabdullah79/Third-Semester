#include<bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* insert(Node *start,int x){
    if(start == 0){
        start = new Node;
        start->data = x;
        start->next = 0;
        return start;
    }else{
        Node* temp = new Node;
        temp->data = x;
        temp->next = 0;

        Node* t = start;

        while(t->next!=0){
            t = t->next;
        }

        t->next = temp;
        return start;
    }
}

Node* Print(Node *start){
    Node *print = start;
    while(print->next){
        cout<<print->data<<" ";
        print = print->next;
         
    }
    cout<<print->data<<" ";
}

Node* Del(Node* start,int pos){
    if(pos==1){
        Node* t = start;
        start = start->next;
        delete t;
        return start;
    }else{
        Node* t=start;
        Node* prev;
        for(int i=1;i<pos;i++){
            prev = t;
            t = t->next;
        }
        prev->next = t->next;
        delete t;
        return start;
    }
    
}

int main(){

    Node* list1 = 0;
    list1 = insert(list1,200);
    list1 = insert(list1,300);
    list1 = insert(list1,400);
    Print(list1);
    list1 = Del(list1,3);
    cout<<endl;
    Print(list1);

    return 0;
}