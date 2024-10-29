//Slection Sort
//Time Complecity:
#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   BubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}