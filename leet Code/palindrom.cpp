#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution{
    public:
     bool isPalindrome(ListNode* head){
        ListNode* head1 = head;
        ListNode* tail = head;
        int n = Size(head);
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i] = head1->val;
            head1 = head1->next;
        }
        int j = n-1;
         for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[j]){
                return false;
            }
            j--;
        }
        return true;
        
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
        while (print!=nullptr)
        {
            cout<<print->val<<" ";
            print = print->next;
        }
        
    }
};

int main(){
    Solution list1,list2;
    ListNode* head1 = 0;

    head1 = list1.Insert(head1,2);
    head1 = list1.Insert(head1,3);
    head1 = list1.Insert(head1,3);
    head1 = list1.Insert(head1,3);
    head1 = list1.Insert(head1,2);
    bool n =  list1.isPalindrome(head1);
    cout<<endl;
    cout<<n;

    return 0;
}