#include<bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution{
    public:
     ListNode* deleteDuplicates(ListNode* head){
        ListNode *fixed = head;
       

        while(fixed!=nullptr){
            ListNode *prev = fixed;
            ListNode *Next = fixed->next;
               while(Next!=nullptr){
                if(fixed->val == Next->val){
                    ListNode* del = Next;
                    prev->next = Next->next;
                    Next = Next->next;
                    delete del;
                }else{
                    prev = Next;
                    Next = Next->next;
                }
                
           }
            fixed = fixed->next;
        }
       
         
           
        
        return head;
    }
    void Pr(ListNode* head){
        ListNode *prev = head;
        ListNode *Next = head->next;
        Next = Next->next;
        cout<<Next->val;
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
    head1 = list1.Insert(head1,10);
    head1 = list1.Insert(head1,10);
    head1 = list1.Insert(head1,20);
    head1 = list1.Insert(head1,20);
    head1 = list1.Insert(head1,10);
    head1 = list1.deleteDuplicates(head1);
    list1.Print(head1);

    return 0;
}