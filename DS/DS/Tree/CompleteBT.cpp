#include<bits/stdc++.h>
using namespace std;

int arr[100];
int size=0;

void Insert(int item){
    arr[++size] = item;
    int n = size;
    while (n>1)
    {
        if(arr[n/2]<arr[n]){
        swap(arr[n/2],arr[n]);
    }else{
        break;
    }
        n=n/2;
    }
}

int Delete(){

    if(size==0){
        return 0;
    }
    int item = arr[1];
    arr[1] = arr[size];
    size--;
    int cur = 1;
    while(true){
        int left = 2*cur;
        int right = 2*cur+1;
        if(left<=size && right<=size){
        if(arr[cur]<arr[left] && arr[left]>=arr[right]){
            swap(arr[cur],arr[left]);
            cur = left;
        }else if(arr[cur]<arr[right] && arr[left]<=arr[right]){
            swap(arr[cur],arr[right]);
            cur = right;
        }else{
            break;
        }
    }else if(left<=size){
        if(arr[cur]<arr[left]){
            swap(arr[cur],arr[left]);
            cur = left;
        }else{
            break;
        }
    }else{
        break;
    }
    }
    return item;
}

void HeapSort(){
    while (size)
    {
        cout<<Delete()<<" ";
    }
    
}
int main(){

    

    Insert(81);
    Insert(89);
    Insert(9);
    Insert(11);
    Insert(14);
    Insert(76);
    Insert(54);
    Insert(22);
    // Delete();
    // for(int i=1;i<9;i++){
    //     cout<<arr[i]<<" ";
    // }

    HeapSort();

    return 0;
}