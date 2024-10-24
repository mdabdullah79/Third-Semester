#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution{
    public:
     int getDecimalValue(ListNode* head){
        ListNode* deci = head;
        int sz = Size(head);
        sz = sz-1;
        int decimal = 0;
        while (deci!=nullptr)
        {
            decimal = decimal + (deci->val*pow(2,sz));
            sz--;
            deci = deci->next;
        }
        return decimal;
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

    head1 = list1.Insert(head1,1);
    head1 = list1.Insert(head1,0);
    head1 = list1.Insert(head1,1);
    int n = list1.getDecimalValue(head1);
    cout<<n<<endl;

    return 0;
}