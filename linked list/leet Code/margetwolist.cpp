#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution{
    public:
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode* l2 = list2;
        ListNode* l1 = list1;
        ListNode* prev = l1;
        
        if(list1==0){
            return list2;
        }else if(list2==0){
            return list1;
        }else if(list1==0 && list2==0){
             return list1;
        }else if(list1->next==0 && list1->next==0){
                if(list1->val>list2->val){
                    list2->next = list1;
                    return list2;
                }else{
                    list1->next = list2;
                    return list1;
                }
        }else{
            if(list1->val>list2->val){
            swap(list1->val,list2->val);
        }
        while(l2!=nullptr){
            while(l1!=nullptr){
                if((l1->val) >= (l2->val)){
                    ListNode* nn = new ListNode;
                    nn->val = l2->val;
                    nn->next = prev->next;
                    prev->next = nn;
                    prev = l1;
                    break;
                }

                else{
                   prev = l1;
                   l1=l1->next;
                 }
            }
            l2 = l2->next;
        }
        
        return list1;
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
    Solution list1,list2;
    ListNode* head1 = 0;
    ListNode* head2=0;
    head1 = list1.Insert(head1,2);
    
    list1.Print(head1);
    cout<<endl;
    head2 = list2.Insert(head2,1);
    
    list2.Print(head2);
    cout<<endl;
    list1.mergeTwoLists(head1,head2);
    list1.Print(head1);

    return 0;
}