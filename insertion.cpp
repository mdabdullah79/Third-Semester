#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    arr[0] = INT_MIN;
    for(int i=2;i<=n;i++){
        int temp = arr[i];
        int ptr = i-1;
        while (temp<arr[ptr]){
            arr[ptr+1] = arr[ptr];
            ptr--;
        }
        arr[ptr+1] = temp;
    }
}



int main(){
    int n;
    int arr[50];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    InsertionSort(arr,n);

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}