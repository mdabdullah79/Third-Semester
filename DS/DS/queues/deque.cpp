#include<bits/stdc++.h>
using namespace std;

class Deque
{
    struct Node
    {
        int data;
        Node *next;
    };
    Node *head;
    Node* tail;
    void addlast(int item){
        Node* nn = new Node;
        nn->data = item;
        nn->next = 0;
        if(head==0){
            head = nn;
            tail = nn;
        }else{
            tail->next = nn;
            tail = tail->next;
        }
    }
    void addfirst(int item){
        Node* nn = new Node;
        nn->data = item;
        nn->next = 0;
        if(head==0){
            head = nn;
        }else{
            nn->next = head;
            head
        }
    }
    void removefirst(){
        if(head==0){
            cout<<"UnderFlow";
        }else{
            Node* nn = head;
            head = head->next;
            delete nn;
        }
    }
public:
    Queue()
    {
        head = 0;
        tail = 0;
    }
    void push(int item){
        addlast(item);
    }
    void pop(){
        removefirst();
    }
    int Front(){
        return head->data;
    }
    int Back(){
        return tail->data;
    }
};

int main(){
    Queue q1;
    q1.push(10);
    q1.push(20);
    q1.push(10);
    q1.push(100);
    q1.pop();
    cout<<q1.Front();
    cout<<endl;
    cout<<q1.Back();



    return 0;
}