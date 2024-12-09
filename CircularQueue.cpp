//Circular Qeue
#include<bits/stdc++.h>
using namespace std;
int cq[100];
int f=0;
int r=0;
int sz=6;
void insert(int item){
    if(f==1 && r==sz || r+1==f){
        cout<<"OverFlow";
    }else if(r==sz){
        r = 1;
    }else if(f==0 && r ==0){
        f=r=1;
    }else{
        r= r+1;
    }
    cq[r] = item;
    return;
}

void Delete(){
    if(f==0){
       cout<<"Underflow";
       return;
    }else if(f==r){
        f=r=0;
    }else if(f==sz){
        f = 1;
    }else{
        f= f+1;
    }
    return;
}
void Display(){
    if(f==0){
        cout<<"The Queue is empty";
    }else if(f<r){
        int i = f;
        while(i<=r){
            cout<<cq[i]<<" ";
            i = i+1;
        }
    }else{
        for(int i=f;i<=sz;i++){
            cout<<cq[i]<<" ";
        }

        for(int i=1;i<=r;i++){
            cout<<cq[i]<<" ";
        }
    }
}
int main(){

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    Delete();
    Delete();
    insert(60);
    insert(70);
    Display();

    cout<<endl;
    cout<<"Front: "<<f<<endl;
    cout<<"Rear: "<<r<<endl;


    return 0;
}