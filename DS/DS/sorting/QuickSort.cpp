//Quick Sort
//Time Complexcity:n(logn)
#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int low,int high){
    int pviot = arr[high];
    int i = low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pviot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);

}
void QuickSort(int arr[],int low,int high){
    if(low<=high){
        int p = Partition(arr,low,high);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,high);

    }
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,1,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}