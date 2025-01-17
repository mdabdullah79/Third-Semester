#include<bits/stdc++.h>

using namespace std;

struct Node
{
   int data;
   int prio;
   Node* next;
};

Node* head = 0;

void Insert(int item, int prio){

    Node* nn = new Node;
    nn->data = item;
    nn->prio = prio;
    nn->next = 0;
    if(head==0){
        head = nn;
        return;
    }else{
        Node* temp = head;
        Node* prev;
        if(head->prio>prio){
            nn->next = head;
            head = nn;
            return;
        }

        while(temp && temp->prio<=prio){
            prev = temp;
            temp = temp->next;
        }
        nn->next = prev->next;
        prev->next = nn;
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

    Insert(10,5);
    Insert(150,2);
    Insert(140,5);
    Insert(14,1);
    

    Display();


    return 0;
}