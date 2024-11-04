#include<bits/stdc++.h>
using namespace std;

int arr[100];
int front =  0;
int rear  =  0;
int maxsz = 10;
class Queue
{
public:
    void push(int n)
    {
        if (front == 1 && rear == maxsz || front==rear+1)
        {
            cout << "Overflow" << endl;
            return;
        }
        if (front == 0 && rear ==0)
        {
            front = 1;
            rear = 1;
        }else if(rear=n){
            rear = 1;
        }else{
            rear++;
        }
        
        arr[rear] = n;
        return;
    }

    void pop()
    {
        if (front == 0)
        {
            cout << "Underflow" << endl;
            return;
        }
        if (front == rear)
        {
            front = 0;
            rear = 0;
            return;
        }
        front++;
        return;
    }
    int Front()
    {
        return arr[front];
    }
    int Rear()
    {
        return arr[rear];
    }
};
int main(){
    Queue q1;
    q1.push(10);
    q1.pop();
    q1.pop();
    return 0;
}