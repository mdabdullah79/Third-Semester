#include<bits/stdc++.h>

using namespace std;


int arr[100];

void Insertion(int n){
    arr[0] = -1;

    for(int i=2;i<=n;i++){
        int temp = arr[i];
        int ptr = i-1;
        while (temp<arr[ptr])
        {
            arr[ptr+1] = arr[ptr];
            ptr--;
        }
        arr[ptr+1] = temp;
        
    }

}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    Insertion(n);

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}