//Selecton Sort
#include<bits/stdc++.h>
using namespace std;

int MinLoc(int arr[],int n,int k){
    int min = arr[k]; //12
    int loc=k;
    for(int i=k;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
            loc = i;
        }
    }
    return loc;
}
// 10 12 16 17 15

int main(){

    int n;
    int arr[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int j = MinLoc(arr,n,i);
        swap(arr[i],arr[j]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}