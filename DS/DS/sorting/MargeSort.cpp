//Marge Sort
//Time Complecity:
#include<bits/stdc++.h>
using namespace std;
void Mage(int arr[],int l,int mid, int r){
    int nA = mid-l+1;
    int nB = r-mid;
    int A[nA];
    int B[nB];
    for(int i=0;i<nA;i++){
        A[i] = arr[l+i];
    }
    for(int i=0;i<nB;i++){
        B[i] = arr[mid+i+1];
    }
    int i =0;
    int j =0;
    int k = l;
    while (i < nA && j < nB)
    {
        if (A[i] < B[j])
        {
            arr[k++] = A[i++];
        }
        else
        {
            arr[k++] = B[j++];
        }
    }
    while (i<nA)
    {
        arr[k++] = A[i++];
    }
    while (j<nB)
    {
         arr[k++] = B[j++];
    }
}

void MargeSort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        MargeSort(arr,l,mid);
        MargeSort(arr,mid+1,r);
        Mage(arr,l,mid,r);
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   MargeSort(arr,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}