//1. Write a program to calculate the Factorial of a number using recursive and nonrecursive method

#include<bits/stdc++.h>
using namespace std;

double factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

double factorialNonRecursive(int n){
    double fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}



int main(){
    
    return 0;
}