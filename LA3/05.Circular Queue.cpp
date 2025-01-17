#include<bits/stdc++.h>
using namespace std;




class CQ{
    int max_sz = 10;
    int arr[20];
    int front = 0;
    int rear = 0;
    public:
    void Insert(int item){
    if(front == 1 && rear==max_sz || front==rear+1){
        cout<<"Overflow";
    }else if(front == 0){
        front++;
        rear++;
    }else if(rear == max_sz){
        rear = 1;
    }else{
        rear++;
    }
    arr[rear] = item;
    }

    voi

    void Display()
    {
        if (front == 0)
        {
            cout << "The queue is empty";
        }
        else
        {
            if (front <= rear)
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            else
            {
                if (front >= rear)
                {
                    for (int i = 1; i <= rear; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    for (int i = front; i <= max_sz; i++)
                    {
                        cout << arr[i] << " ";
                    }
                }
            }
        }
    }
};

int main(){

    CQ ob;

    ob.Insert(10);
    ob.Insert(20);
    ob.Insert(30);
    ob.Insert(40);

    ob.Display();


    return 0;
}