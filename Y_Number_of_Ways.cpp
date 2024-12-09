#include<bits/stdc++.h>
using namespace std;
int num1,num2;
int way(int num){

    if(num>=num2){
        return num==num2;
    }
    return way(num+1)+way(num+2)+way(num+3);
}


int main(){
    
    cin>>num1;
    cin>>num2;
    cout<<way(num1);
    return 0;
}