#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution{
    public:
     ListNode* middleNode(ListNode* head){
        int n = Size(head);
        n = n/2+1;
        ListNode* temp = head;
        for(int i=1;i<n;i++){
            temp = temp->next;
        }
        head = temp;
        return head;
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
    head1 = list1.Insert(head1,4);
    head1 = list1.Insert(head1,5);
    head1 = list1.Insert(head1,6);
     head1 = list1.Insert(head1,7);
    list1.Print(head1);
    cout<<endl;
    head1 = list1.middleNode(head1);
    list1.Print(head1);

    return 0;
}