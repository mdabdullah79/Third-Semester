#include<bits/stdc++.h>
using namespace std;

class Heap{

    int Size = 0;
    int heap[100];
    public:
    void Insert(int item){
         heap[++Size] = item;
         int n = Size;
         while (n>1)
         {
            if(heap[n/2]<heap[n]){
                swap(heap[n/2],heap[n]);
            }else{
                break;
            }
            n = n/2;
         }
    }

    void Delete(){
        if(Size==0){
            return;
        }
        heap[1] = heap[Size];
        int n = 1;
         Size--;
        while (n<Size)
        {
            if(heap[2*n]>heap[(2*n)+1] && Size>2*n){
                swap(heap[n],heap[2*n]);
                n = 2*n;
            }else if(heap[2*n]<heap[(2*n)+1] && Size>(2*n)+1){
                swap(heap[n],heap[(2*n)+1]);
                n = (2*n)+1;
    
            }else{
                break;
            }
        }
       
    }
    void Sort(){
        while(Size){
            cout<<heap[1]<<" ";
            Delete();
            
        }
        
       
    }
    void Display(){
        for(int i=1;i<=Size;i++){
            cout<<heap[i]<<" ";
        }
    }
   
};

int main(){

    Heap h;
    h.Insert(44);
    h.Insert(30);
    h.Insert(50);
    h.Insert(22);
    h.Insert(60);
    h.Insert(55);
    h.Insert(77);
    h.Sort();

    //h.Sort();



    return 0;
}