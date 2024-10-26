#include<bits/stdc++.h>
using namespace std;


void swap(int *a,int *b){
    int t = *a;
    *a =  *b;
    *b = t;
}
int* p;
void fun(){
    p = new int;
    *p = 100;
   
}

int main(){

    int x,y;
    x = 5;
    y = 15;
    fun();
    cout<<*p;

    return 0;
}