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

void PreOrder(Node* root){
    if(root==0){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void Inorder(Node* root){
    if(root==0){
        return;
    }
    PreOrder(root->left);
     cout<<root->data<<" ";
    PreOrder(root->right);

}

void PostOrder(Node* root){
    if(root==0){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


int main(){

    Insert(13);
    Insert(20);
    Insert(6);
    Insert(7);
    Insert(25);
    Insert(11);
    cout<<"PreOrder: ";
    PreOrder(root);
    cout<<endl;

    cout<<"InOrder: ";
    Inorder(root);
    cout<<endl;

    cout<<"PostOrder: ";
    PostOrder(root);
    cout<<endl;

    

    return 0;
}