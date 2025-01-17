#include<bits/stdc++.h>
using namespace std;


int ValueOfPosfix(string s){
    int j =0;
    stack<int> st;
    int num;
    s[s.size()] = ')';
    int i = 0;
    while(s[i]!=')'){
        if(isdigit(s[i])){
            num = s[i] - '0';
            st.push(num);
        }else if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
            if(s[i]=='+'){
                num = a+b;
                st.push(num);
            }else if(s[i]=='-'){
                num = a-b;
                st.push(num);
            }else if(s[i]=='*'){
                num = a*b;
                st.push(num);
            }else if(s[i]=='/'){
                num = a/b;
                st.push(num);
            }else if(s[i]=='^'){
                num =pow(a,b);
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
    cout<<ValueOfPosfix(s);
    return 0;
}