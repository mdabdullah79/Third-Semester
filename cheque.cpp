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
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;
   
   

}