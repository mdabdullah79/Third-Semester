#include<bits/stdc++.h>
using namespace std;

class Heap
{
    vector<int> heap;
public:
    void Insert(int item)
    {
        heap.push_back(item);
        int cur_idx = heap.size()-1;
        while (cur_idx)
        {
            int parent_idx = (cur_idx-1)/2;
            if(heap[parent_idx]<heap[cur_idx]){
                swap(heap[parent_idx],heap[cur_idx]);
            }else{
                break;
            }
            cur_idx = parent_idx;

        }
        
        
    }
    
    void Delete(){
        if(heap.size()==0){
            cout<<"The heap is empty";
            return ;
        }
        int large_idx = heap.size()-1;
        heap[0] = heap[large_idx];
        heap.pop_back();
        int cur = 0;
        while (true)
        {
           int left_idx  = cur*2+1;
           int right_idx = cur*2+2;
           int last_idx = heap.size()-1;
           if(left_idx<=last_idx && right_idx<=last_idx){
                if(heap[left_idx]>=heap[right_idx] && heap[left_idx]>heap[cur]){
                    swap(heap[left_idx],heap[cur]);
                    cur = left_idx;
                }else if(heap[right_idx]>=heap[left_idx] && heap[right_idx]>heap[cur]){
                    swap(heap[right_idx],heap[cur]);
                    cur = right_idx;
                }else{
                    break;
                }
           }else if(left_idx<=last_idx){
                if(heap[left_idx]>heap[cur]){
                    swap(heap[left_idx],heap[cur]);
                    cur = left_idx;
                }else{
                    break;
                }
            

           }else if(right_idx<=last_idx) {
            if(heap[right_idx]>heap[cur]){
                swap(heap[right_idx],heap[cur]);
                cur = right_idx;
            }else{
                break;
            }
           }else{
            break;
           }

        }

        
    }
    void Sort(){

        while (heap.size())
        {
            cout<<heap[0]<<" ";
            Delete();
        }
        
        
    }
    void display(){
        for(auto i: heap){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};

int main(){

    if('A'>'B'){
        cout<<1;
    }
    
    return 0;
}