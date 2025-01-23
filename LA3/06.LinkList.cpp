#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = 0;

void Insert(int item){
    Node* nn = new Node;
    nn->data = item;
    nn->next = 0;
    if(head==0){
        head = nn;
        return;
    }
    Node* temp = head;
    while (temp->next!=0)
    {
        temp = temp->next;
    }
    temp->next = nn;
    return;
    
}
void Delete(){

    if(head==0){
        cout<<"empty";
        return;
    }
    Node* del = head;
    head = head->next;
    delete del;
    
}
void Display(){
    Node* dis = head;
    while(dis){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
}

int main(){

    Insert(20);
    Insert(40);
    Insert(80);
    Insert(160);

    Insert(220);
    Display();
    cout<<endl;
    Delete();
     Delete();
    Display();

    return 0;
}