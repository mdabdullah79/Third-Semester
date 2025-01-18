#include<bits/stdc++.h>
using namespace std;

int arr[100];

int Partion(int left,int right){
    int pviot = arr[right];
    int j = left-1;
    for(int i=left;i<=right-1;i++){
        if(arr[i]<=pviot){
            j++;
            swap(arr[j],arr[i]);
        }
    }
   swap(arr[j+1],arr[right]);
   return (j+1);
}

void QuickShort(int left,int right){
    if(left>=right){
        return;
    }
    int p = Partion(left,right);
    QuickShort(left,p-1);
    QuickShort(p+1,right);
    
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    QuickShort(1,n);

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }


}