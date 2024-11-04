#include<bits/stdc++.h>
using namespace std;

char Q[100];
char P[100];
int j=0;

int compare(char sign){
    
    if(sign == '+' || sign == '-'){
        return 1;
    }if (sign == '*' || sign == '/'){
        return 2;
    }if (sign == '^'){
        return 3;
    }
}

void InfixToPosfix(){
    stack <char> st;
    st.push('(');
    int i=0;
    strcat(Q,")");
    while (Q[i]!='\0')
    {
        if(isdigit(Q[i])){
            P[j++] = Q[i];
        }else if(Q[i]=='('){
            st.push(Q[i]);
        }else if(Q[i] == '+' || Q[i] == '-' || Q[i] == '^' || Q[i] == '*' || Q[i] == '/'){
            int flag = 0;
            while(flag!=1){
                 char s = st.top();
                 st.pop();
                 if(s == '+' || s == '-' || s == '^' || s == '*' || s == '/'){
                    if(compare(s)>=compare(Q[i])){
                        P[j++] = s;
                    }else{
                        st.push(s);
                        st.push(Q[i]);
                        flag = 1;
                    }
                 }else{
                    st.push(s);
                    st.push(Q[i]);
                    flag = 1;
                 }
            }
        }else if(Q[i]==')'){
            while(st.top()!='('){
                P[j++] = st.top();
                st.pop();
            }
            st.pop();
        }
        i++;
    }
    
}
int ValueOfPosfix(char s[]){
    stack<int> st;
    int num;
    s[j++] = ')';
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
    int i = 0;
    while(cin>>Q[i]){
        i++;
    }
    InfixToPosfix();
   
//    for(int i=0;i<j;i++){
//     cout<<P[i];
//    }
    cout<<P<<endl;;
    cout<<ValueOfPosfix(P);



}