#include<bits/stdc++.h>

using namespace std;

int main(){
   string s;
   int arr[200] = {0};

   cin>>s;

   for(int i=0;i<s.size();i++){
    arr[s[i]]++;
   }

   for(int i=0;i<200;i++){
    if(arr[i]>0){
        cout<<(char)i<<" "<<":"<<" "<<arr[i]<<endl;
    }
   }
}