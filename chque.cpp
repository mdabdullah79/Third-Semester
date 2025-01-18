#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    int priority;
    node* next;
};

class Priority_Queue
{
    node* Front;

public:
    Priority_Queue()
    {
        Front = nullptr;
    }
    bool isEmpty()
    {
        return Front==nullptr;
    }

    void enqueued(int data,int priority)
    {
        node* temp = new node;
        temp->data = data;
        temp->priority = priority;
        temp->next = nullptr;

        if(isEmpty() || priority < Front->priority)  /// If Current priority is Higher;
        {
            temp->next = Front;
            Front = temp;
        }
        else
        {
            node* current = Front;
            while(current->next!=NULL && current->next->priority <= priority)
            {

                current = current->next;
            }
            temp->next = current->next;
            current->next = temp;
        }

        cout << "Enqueued: " << data << " with priority: " << priority << endl;

    }

    void Dequeued()
    {
        if(isEmpty())
        {
            cout << "Priority Queue is empty" << endl;
            return;
        }

        int value = Front->data;
        node* temp = Front;
        Front = Front->next;
        delete temp;

        cout << "Dequeued value: " << value << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Priority Queue is empty" << endl;
            return;
        }

        node* current = Front;
        cout << "Priority Queue elements (from Front to rear): ";
        while (current != nullptr)
        {
            cout << "(" << current->data << ", " << current->priority << ") ";
            current = current->next;
        }
        cout << endl;
    }



};

int main(){
    Priority_Queue obj;

obj.enqueued(10,2);
obj.enqueued(11,3);
obj.enqueued(12,6);
obj.enqueued(13,20);
obj.enqueued(19,3);

cout << endl << endl;
obj.display();

obj.Dequeued();
cout << endl << endl;
obj.display();



}