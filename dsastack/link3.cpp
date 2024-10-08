#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* insert(int x,Node* start){
    Node* temp = new Node;
    temp->data = x;
    temp->next = 0;
    if(start == 0){
        start = temp;
        return start;
    }else{
        Node* t = start;
        while(t->next != 0){
            t = t->next;
        }
        t->next = temp;
        return start;
    }
}

Node* marge(Node* start1,Node* start2){
    if(start1==0){
        start1 = start2;
        return start1;
    }
    Node* t = start1;
    while(t->next != 0){
        t = t->next;
    }
    t->next = start2;
    return start1;

}

void print(Node* print){
    Node* p = print;
    while(p->next != 0){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<p->data<<" ";
}
void search(int x,Node* start){
    Node * t = start;
    while (t->next !=0)
    {
    if(t->data<x){
        t = t->next;
    }else if(t->data==x){
        cout<<"Found"<<endl;
        t->next = 0;
    }else{
        cout<<"Not Found"<<endl;
        t->next = 0;
    }
    }

    if(t->data == x){
        cout<<"Found"<<endl;
    }else{
         cout<<"Not Found"<<endl;
    }
    
}

void Sort(Node* start){

    Node* t = start;
    while(t->next != 0){
        
    }
}


Node* rev(Node *start){
    Node* cur = start;
    Node* next;
    Node* prev;
    prev = 0;

    while(cur != 0){
        next = cur->next;
        cur->next = prev;

        prev = cur;
        cur = next; 

    }
    return prev;

}
int main(){

    // Node* list1 = 0;
    // list1 = insert(100,list1);
    // list1 = insert(100,list1);
    // list1 = insert(100,list1);
    // print(list1);

    Node* list2 = 0;
    cout<<endl<<"List 2: ";
    list2 = insert(205,list2);
    list2 = insert(2010,list2);
    list2 = insert(202,list2);


    print(rev(list2));
    


    // search(2030,list2);
    return 0;
}