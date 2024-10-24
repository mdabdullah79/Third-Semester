#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    stack <char> st;
    int flag = 0;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push('(');
        }else if(!st.empty()){
            st.pop();
        }else{
            flag = 1;
            break;
        }
    }


    if(flag==0){
        cout<<"Good";
    }else{
        cout<<"Bad";
    }

}