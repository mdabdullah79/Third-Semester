#include<bits/stdc++.h>

using namespace std;

double fib(double n){
    if(n==0){
        return n;
    }if(n==1){
        return n;
    }

    return fib(n-1)+fib(n-2);


}

int main(){
    double n;

    cin>>n;
    cout<<fib(n)<<endl;
    return 0;

}