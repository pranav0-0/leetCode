#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void ans(node* root,int &total){
    if(root==NULL){
        return;
    }
    ans(root->right,total);
    total+=root->data;
    root->data=total;
    ans(root->left,total);
    cout<<total<<" ";
}

void preorder(node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    return;
    inorder(root->right);
    inorder(root->left);
    cout<<root->data<<" ";
}

int main()
{

    struct node* root = new node(0);
    // root->left = new node(1);
    root->right = new node(1);
    // root->left->left = new node(0);
    // root->left->right = new node(2);
    // root->right->left = new node(5);
    // root->right->right = new node(7);
    // root->left->right->right = new node(3);
    // root->right->right->right = new node(8);
    // cout<<"preorder =\t";
    // preorder(root);
    // cout<<endl;
    cout<<"inorder before =\t";
    inorder(root);
    cout<<endl;
    // cout<<"postorder =\t";
    // postorder(root);
    int x=0;
    ans(root,x);
    cout<<"inorder after =\t";
    inorder(root);
    cout<<endl;
}

/*
            1
           / \
         2     3
        / \   / \
       4   5 6   7
*/