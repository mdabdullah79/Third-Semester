#include<bits/stdc++.h>
using namespace std;

int arr[11];
void Insert(int item){
    int hash = item%11;
    if(arr[hash]==0){
        arr[hash] = item;
    }else{
        int cir = hash;
        while(arr[hash]){
            hash++;
            if(hash==10){
                hash = 0;
            }
            if(hash==cir){
                break;
            }
        }
        arr[hash] = item;
    }
    
}
int main(){

    Insert(20);
    Insert(40);
    Insert(60);
    Insert(70);
    Insert(100);
    Insert(100);
    Insert(100);
    Insert(100);

    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}