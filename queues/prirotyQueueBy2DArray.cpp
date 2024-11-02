#include<bits/stdc++.h>
using namespace std;
int Queue[100][100];
int Front[100];
int Rear[100];
int max_sz = 5;
void Insert(int val,int pir){
    if(Front[pir] == 1 && Rear[pir] == max_sz || Rear[pir]+1==Front[pir]){
        cout<<"OverFlow"<<endl;
        return;
    }
    if(Rear[pir]==max_sz){
        Rear[pir] = 0;
    }
    if(Front[pir]==0){
        Front[pir]++;
    }
    Rear[pir]++;
    Queue[pir][Rear[pir]] = val;
    return;
}
void Delete(){
    int k = 0;
    for(int i= 1;i<=max_sz;i++){
        if(Front[i]!=0){
            k = i;
            break;
        }
    }
    if(k==0){
        cout<<"UnderFlow"<<endl;
    }else{
        Queue[k][Front[k]] = 0;
        if(Front[k]==Rear[k]){
            Front[k]=Rear[k]=0;
        }else if(Front[k]==max_sz){
            Front[k] = 1;
        }else{
            Front[k]++;
        }
    }
}
void Display(){
    for(int i=1;i<=max_sz;i++){
        
            for(int j=1;j<=max_sz;j++){
            if(Queue[i][j]==0){
                cout<<"    ";
            }else{
                 cout<<Queue[i][j]<<" ";
            }
           
        }
        
        cout<<endl;
    }
}

int main(){
   
    Front[1] = 2;
    Front[2] = 1;
    Front[3] = 0;
    Front[4] = 3;
    Front[5] = 4;
    Rear[1]  = 2;
    Rear[2]  = 3;
    Rear[3]  = 0;
    Rear[4]  = 5;
    Rear[5]  = 4;
    Queue[1][2] = 111;
    Queue[2][1] = 222;
    Queue[2][2] = 333;
    Queue[2][3] = 2424;
    Queue[4][3] = 666;
    Queue[4][4] = 444;
    Queue[4][5] = 555;
    Queue[5][3] = 777;
    Insert(400,2);
    Delete();
    Display();

    return 0;
}