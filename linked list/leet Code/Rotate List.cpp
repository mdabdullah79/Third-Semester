#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution{
    public:
     ListNode* rotateRight(ListNode* head,int k){
        ListNode* tail=head;
        ListNode* prev;
        int n = Size(head);
        if(k>n && n!=0){
            int m = k;
            k = k/n;
            k = k*n;
            k = (m-k)+n;
        }
        
       if(head==0 || head->next==0){
            return head;
        }else{
    while (k--){
        while (tail->next!=0)
        {
            prev = tail;
            tail = tail->next;
        }
        prev->next = 0;
        tail->next = head;
        head = tail;
        }
        
       return head;
    }
        
    }
    int Size(ListNode* head){
        ListNode *sz = head;
        int ct = 0;
        while(sz!=nullptr){
            sz = sz->next;
            ct++;
        }
        return ct;
    }
    ListNode* Insert(ListNode* head,int val){
        ListNode* nn = new ListNode;
        nn->val = val;
        nn->next = 0;
        if(head==0){
            head = nn;
            return head;
        }else{
            ListNode* temp = head;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = nn;
            return head;
        }
        
    }
    void Print(ListNode* head){
        ListNode* print = head;
        while (print->next!=0)
        {
            cout<<print->val<<" ";
            print = print->next;
        }
        cout<<print->val<<" ";
        
    }
};

int main(){
    Solution list1;
    ListNode* head1 = 0;

    head1 = list1.Insert(head1,1);
    head1 = list1.Insert(head1,2);
    head1 = list1.Insert(head1,3);
    list1.Print(head1);
    cout<<endl;
    head1 = list1.rotateRight(head1,2000000000);
    list1.Print(head1);

    return 0;
}