#include<bits/stdc++.h>
using namespace std;
int arr[100];

void marge(int left,int mid,int right){
    int nA = mid-left+1;
    int nB = right-mid;
    int arrA[nA];
    int arrB[nB];

    for(int i=0;i<nA;i++){
        arrA[i] = arr[i+left];
    }

    for(int i=0;i<nB;i++){
        arrB[i] = arr[i+mid+1];
    }
    int i = 0;
    int j = 0;
    int k = left;

    while(i<nA && j<nB){
        if(arrA[i]<arrB[j]){
            arr[k++] = arrA[i++];
    }else{
        arr[k++] = arrB[j++];
    }
    }
    
    while (i<nA)
    {
        arr[k++] = arrA[i++];
    }
    while (j<nB)
    {
        arr[k++] = arrB[j++];
    }
    
}

void MargeSort(int left,int right){
    if(left<right){
        int mid = (left+right)/2;
        MargeSort(left,mid);
        MargeSort(mid+1,right);
        marge(left,mid,right);
    }
}


int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MargeSort(0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}