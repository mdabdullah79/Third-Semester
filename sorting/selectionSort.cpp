//Slection Sort
//Time Complecity:
#include<bits/stdc++.h>
using namespace std;
int MinEl(int arr[],int n,int k){
    int min = arr[k];
    int loc = k;
    for(int j=k+1;j<=n;j++){
        if(min>arr[j]){
            min = arr[j];
            loc = j;
        }
    }
    return loc;
}

int MinSt(string st,int n,int k){
    char min = st[k];
    int loc = k;
    for(int i=k+1;i<n;i++){
        if(min>st[i]){
            min = st[i];
            loc = i;
        }
    }
    return loc;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     cin>>arr[i];
    // }
   string st;
   cin>>st;
    for(int k=0;k<n;k++){
        int j = MinSt(st,n,k);
        swap(st[k],st[j]);
    }

    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }

   cout<<st;

}