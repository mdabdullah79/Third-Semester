#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
};
Node* head = 0;

void Insert(int item){
    Node* nn = new Node;
    nn->data = item;
    nn->next = 0;

    if(head == 0){
        head = nn;
    }else{
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = nn;
        
    }
}

void Display(){
    Node* dis = head;
    while (dis)
    {
        cout<<dis->data<<" ";
        dis = dis->next;
    }
    
}
int main(){

    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    Display();
    return 0;
}
