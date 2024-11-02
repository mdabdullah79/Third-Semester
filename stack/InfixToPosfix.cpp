#include<bits/stdc++.h>
using namespace std;
char P[100];
char Q[100];
int compare(char sign){
    if(sign == '+' || sign == '-'){
        return 1;
    }else if (sign == '*' || sign == '/'){
        return 2;
    }else if (sign == '^'){
        return 3;
    }
}
void InfixToPosfix(){
    stack <char> st;
    strcat(Q,")");
    int i = 0;
    int j = 0;
    int sz = 11;
    while (sz--)
    {
       
        if (isdigit(Q[i]))
        {
            P[j] = Q[i];
            j++;
        }
        if (Q[i] == '(')
        {
            st.push(Q[i]);
        }
        if (Q[i] == '+' || Q[i] == '-' || Q[i] == '^' || Q[i] == '*' || Q[i] == '/')
        {
            while (1)
            {
                char s = st.top();
                st.pop();
                if (s == '+' || s == '-' || s == '^' || s == '*' || s == '/')
                {
                    if (compare(s) >= compare(Q[i]))
                    {
                        P[j++] = Q[i];
                    }
                }
                else
                {
                    st.push(s);
                    st.push(Q[i]);
                    break;
                }
            }
        }if(Q[i]==')'){
            while(st.top()!='('){
                char s = st.top();
                st.pop();
                P[j++] = s;
            }
        }
        i++;
    }
    
}


int main(){
    
    string s = "12";
    cout<<s[0];

   
    
}