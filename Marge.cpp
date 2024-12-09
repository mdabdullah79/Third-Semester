#include<bits/stdc++.h>
using namespace std;

void Marge(int arr[],int l,int mid,int r){

    int sz1 = mid-l+1;
    int sz2 = r-mid;
    
     int arr1[sz1];
     int arr2[sz2];

     for(int i=0;i<sz1;i++){
        arr1[i] = arr[i+l]; 
     }
     for(int i=0;i<sz2;i++){
        arr2[i] = arr[mid+i+1]; 
     }
     int i=0;
     int j=0;
     int k=l;
     while(i<sz1 && j<sz2){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }else{
             arr[k++] = arr2[j++];
        }
     }
     while(i<sz1){
        arr[k++] = arr1[i++];
     }
     while (j<sz2)
     {
        arr[k++] = arr2[j++];
     }
     

    
}

void MargeSort(int arr[],int l,int r){
    
    if(l<r){
    int mid = (l+r)/2;
    MargeSort(arr,l,mid);
    MargeSort(arr,mid+1,r);
    Marge(arr,l,mid,r);
    }
}


int main(){

    int arr1[100],arr2[100],marr[100];

    int sz1;
    cin>>sz1;

    for(int i=0;i<sz1;i++){
        cin>>arr1[i];
    }
    MargeSort(arr1,0,sz1);

    for(int i=0;i<sz1;i++){
        cout<<arr1[i]<<" ";
    }


    return 0;
}