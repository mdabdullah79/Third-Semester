#include<bits/stdc++.h>
using namespace std;


int VOP(string s){
    stack<int> st;
    int sz = s.size();
    s[sz] = ')';
    int i = 0,num;
    while (s[i]!=')')
    {
        cout<<s[i];
        if(isdigit(s[i])){
            num = s[i]-'0';
            st.push(num);
        }else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(s[i]=='+'){
                num = a+b;
                st.push(num);
            }else if(s[i]=='-'){
                num = a+b;
                st.push(num);
            }else if(s[i]=='*'){
                num = a+b;
                st.push(num);
            }else if(s[i]=='/'){
                num = a+b;
                st.push(num);
            }
        }
        i++;
    }
    return st.top();
}

int main(){

    
    string s;
    cin>>s;
    cout<<VOP(s);
    return 0;
}