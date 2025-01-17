#include<bits/stdc++.h>
using namespace std;
int count;
void hanoi(int n,char beg,char aux, char end){
    
    if(n==0){
        return;
    }

    hanoi(n-1,beg,end,aux);
    cout<<beg<<">"<<end<<endl;
    hanoi(n-1,aux,beg,end);
    
}

int main(){

 
    
    hanoi(4,'A','B','C');
    

}