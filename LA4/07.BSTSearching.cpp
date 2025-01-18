#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* root = 0;

void Insert(int val){
    Node* nn = new Node;
    nn->data = val;
    nn->left = nn->right = 0;
    if(root==0){
        root = nn;
        return;
    }
    Node* temp = root;
    while(true){
        if(val<temp->data){
            if(temp->left==0){
                temp->left = nn;
                return;
            }else{
                temp = temp->left;
            }
        }else{
            if(temp->right==0){
                 temp->right = nn;
                 return;
            }else{
                temp = temp->right;
            }
        }
    }
}

bool Search(int val){
    Node* temp = root;

    while(temp){
        if(temp->data == val){
            return true;
        }
        else if(val<temp->data){
          temp = temp->left;
        }else if(val>temp->data){
             temp = temp->right;
        }
        
    }
    return false;
}


// bool Search(int val) {
//     Node* temp = root;

//     while (temp) {
//         if (val == temp->data) {  // If the value is found
//             return true;
//         } else if (val < temp->data) {  // Move to the left subtree
//             temp = temp->left;
//         } else {  // Move to the right subtree
//             temp = temp->right;
//         }
//     }

//     return false;  // Value not found
// }


void PreOrder(Node* root){
    if(root==0){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
int main(){

    Insert(13);
    Insert(20);
    Insert(6);
    Insert(7);
    Insert(25);
    Insert(11);
    PreOrder(root);
    cout<<Search(7);

    

    return 0;
}