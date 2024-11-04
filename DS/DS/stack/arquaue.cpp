#include<bits/stdc++.h>

using namespace std;

class Queue{
    int arr[100];
    int size,maxsize,back,front;
    public:
    Queue(){
        size = 0;
        maxsize = 100;
        back = -1;
        front = -1;
    }
    void Push(int x){
        back++;
        arr[back] = x;
        front = 0;
    }
    void Pop(){
        if(front==-1){
            return;
        }
        front++;
        return;
    }
    int Front(){
        if(front>back){
            return 0;
        }
        return arr[front];

    }
    int Back(){
        if(back==-1){
            return 0;
        }
        return arr[back];
    }
    bool Empty(){
        if(front>back){
            return 1;
        }else{
            return 0;
        }
    }
    int Size(){
    int a = front;
    while (!Empty())
    {
        size++;
        Pop();
    }
    front = a;
    return size;
    }
    
};


int main(){

    
    Queue q1;
    q1.Push(10);
    q1.Push(20);
    q1.Push(30);
    q1.Push(40);
    cout<<q1.Front();
    q1.Pop();
    cout<<q1.Front();
    q1.Pop();
    q1.Pop();
    q1.Pop();
    cout<<q1.Front();
   
    

    
   


    return 0;
}