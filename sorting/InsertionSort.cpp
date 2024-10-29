#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    arr[0] = -100;
    for(int k=2;k<=n;k++){
        int temp = arr[k];
        int ptr = k-1;
    while(temp<arr[ptr]){
        arr[ptr+1] = arr[ptr];
        ptr = ptr-1;
    }
    arr[ptr+1] = temp;
    }
    return;
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,8);
    for(int i=1;i<=8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}