//Quick Sort
//Time Complexcity:n(logn)
#include<bits/stdc++.h>
using namespace std;
int Partion(int arr[],int left,int right){
    int pviot = arr[right];
    cout<<"pviot "<<pviot<<endl;
    int j = left-1;
    for(int i=left;i<=right-1;i++){
        if(arr[i]<=pviot){
            j++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[j+1],arr[right]);
    return j+1;
}

// void QuicSort(int arr[],int l,int r){
//     if(l<=r){
//         int p = Partion(arr,l,r);
//         cout<<p<<endl;
//         QuicSort(arr,l,p-1);
//         QuicSort(arr,p+1,r);
//     }

    
//  }


int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    //QuicSort(arr,1,n);
    int p = Partion(arr,1,n);
    cout<<p<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}