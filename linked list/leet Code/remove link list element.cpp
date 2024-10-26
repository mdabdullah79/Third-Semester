#include<bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution{
    public:
    //    ListNode* removeElement(ListNode* head, int val) {
    //         ListNode* prev = 0;
    //         ListNode* h = head;
    //         if(head==nullptr){
    //             return head;
    //         }
    //             while(head->next!=nullptr){
    //             if(head->val==val){
    //                 ListNode* nn = head;
    //                 head = head->next;
    //                 delete nn;
    //             }else{
    //                 break;
    //             }
    //         }
    //          if(head->val==val){
    //                head = nullptr;
    //             }
    //         ListNode* s = head;
    //         if(s != nullptr){
    //             while(s->next!=0){
    //                 if(s->val == val){
    //                 ListNode* del = s;
    //                 prev->next = s->next;
    //                 s = s->next;
    //                 delete del;
    //             }else{
    //                 prev = s;
    //                 s = s->next;
    //             }
                
    //         }
    //          if(s->val == val){
    //                 ListNode* del = s;
    //                 prev->next = s->next;
    //                 delete del;
    //             }
    //         }
    //         return head; 
    // }

     ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp = new ListNode;
        temp->next = head;
        ListNode *curr = temp;
        while(curr->next != NULL ){
            cout<<curr->next->val<<" ";
            if(curr->next->val == val) curr->next = curr->next->next;
            else curr = curr->next;
        }
        return temp->next;
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
    head1 = list1.Insert(head1,2);
    head1 = list1.Insert(head1,10);
    head1 = list1.Insert(head1,10);
    head1 = list1.Insert(head1,10);
    head1 = list1.Insert(head1,20);
    head1 = list1.removeElements(head1,10);
    list1.Print(head1);

    return 0;
}