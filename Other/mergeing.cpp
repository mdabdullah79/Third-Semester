//Marge Two arry

#include<bits/stdc++.h>
using namespace std;
int Marge(int A[],int nA,int B[],int nB,int C[],int nC){
    int NA=1,NB=1,ptr=1;
    while(NA<=nA+1 && NB<=nB+1){
        if(A[NA]<B[NB]){
            C[ptr++] = A[NA++];
        }else{
            C[ptr++] = B[NB++];
        }
    }
    if(NA<nA){
        for(int k=NA;k<=nA;k++){
            C[ptr++] = A[k];
        }
    }else{
         for(int k=NB;k<=nB;k++){
            C[ptr++] = B[k];
        }
    }

}
int main(){
    int A[100],B[100],C[200];
    int nA;
    cin>>nA;
    for(int i=1;i<=nA;i++){
        cin>>A[i];
    }

    int nB;
    cin>>nB;
    for(int i=1;i<=nB;i++){
        cin>>B[i];
    }
    Marge(A,nA,B,nB,C,nA+nB);
    for(int i=1;i<=nB+nA;i++){
       cout<<C[i]<<" ";
    }
   

}