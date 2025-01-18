#include<bits/stdc++.h>
using namespace std;

int arr[100];

int Min(int k,int n){
    int min = arr[k];
    int loc = k;
    for(int i = k;i<=n;i++){
        if(min>arr[i]){
            min = arr[i];
            loc = i;
        }
    }
    return loc;
}

void Selection(int n){
    for(int i=1;i<=n;i++){
        int loc = Min(i,n);
        swap(arr[i],arr[loc]);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    Selection(n);

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }


}