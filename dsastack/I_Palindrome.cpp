#include<bits/stdc++.h>

using namespace std;

int main(){
   string s;
   int flag=0;
   cin>>s;
   int j = s.size()-1;
   for(int i=0;i<s.size()/2;i++){
       if(s[i]!=s[j]){
        flag = 1;
        break;
       }
       j--; 
   }

   if(flag==1){
    cout<<"NO";
   }else{
    cout<<"YES";
   }
}