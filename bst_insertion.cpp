#include<bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node *left=NULL;
    node *right=NULL;
};

int inorder(node *root)
{
    if(root==NULL)
    return 0;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

int main()
{
    int n=0;
    node *head=NULL,*temp=NULL;
    while(1)
    {
        cout<<"Enter number(-1 for end)";
        cin>>n;
        if(n==-1)
        break;
        if(head==NULL)
        {
            temp=new node();
            temp->data=n;
            head=temp;
        }
        else
        {
            temp=head;
            node *temp1=new node();
            temp1->data=n;
            while(1)
            {
                if(temp->data>n)
                    if(temp->left==NULL){temp->left=temp1;break;}
                    else
                    temp=temp->left;
                else if(temp->data<n)
                    if(temp->right==NULL){temp->right=temp1;break;}
                    else
                    temp=temp->right;
            }
        }
    }
    //bfs
    queue<node *> q1;
    q1.push(head);
    while(!q1.empty())
    {
        cout<<q1.front()->data<<" ";
        if(q1.front()->left)
        q1.push(q1.front()->left);
        if(q1.front()->right)
        q1.push(q1.front()->right);
        q1.pop();
    }
    inorder(head);
    
}