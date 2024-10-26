#include<bits/stdc++.h>

using namespace std;
#define mxsz 10
int arr[mxsz];
int toppos=-1;
void push(int x){
    if(toppos==9){
        cout<<"Overflow"<<endl;
        return;
    }
    arr[toppos] = x;
    toppos++;

    
}
void pop(){
    if(toppos==-1){
        cout<<"Underflow"<<endl;
        return;
    }
    toppos--;
}
int top(){
    return arr[toppos];
}
int size(){
    return toppos+1;
}
int main(){
    push(10);
    pop();
    pop();

    cout<<top()<<endl;
    cout<<size()<<endl;
    

    return 0;
}