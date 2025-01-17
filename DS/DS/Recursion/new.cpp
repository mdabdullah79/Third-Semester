#include<bits/stdc++.h>
using namespace std;

void rec(int n){
    if(n==0){
        return;
    }
    cout<<n%2;
    rec(n/2);

}

int gcd(int a,int b){
    if(a<b){
         gcd(b,a);
    }else if(b==0){
        return a;
    }else{
        gcd(b,(a%b));
    }
}

int main(){
    
    cout<<gcd(540,279);
}