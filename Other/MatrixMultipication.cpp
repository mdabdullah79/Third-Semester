#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,c1,r2,c2;

    cin>>r1>>c1;
    cin>>r2>>c2;

    int arr[100][100] = {0};
    int arr1[100][100];
    int arr2[100][100];

    if(c1!=r2){
        cout<<"Matrix A column and B row amount need to be the same";
    }else{
        for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }

    
    int k=0,l=0;
    for(int i=0;i<r1;i++){
        int sum = 0;
        for(int j=0;j<c1;j++){
           for(int k=0;k<c1;k++){
            arr[i][j]= arr[i][j]+(arr1[i][k]*arr2[k][j]);
           }
        }
       
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    


    return 0;
}