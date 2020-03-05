#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
node *insert(node *root,int x)
{
	if(root==NULL)
	{
		node *newnode=new node;
		newnode->data=x;
		newnode->left=NULL;
		newnode->right=NULL;
		root=newnode;
		return root;
	}
	else if(x<=root->data)
	{
		root->left=insert(root->left,x);
	}
	else if(x>root->data)
	{
		root->right=insert(root->right,x);
	}
}
void preorder(node *root)
{
	if(root==NULL)
	{
		return;
		
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void levelorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        node *temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        
    }
  //Your code here
}
node *deepestnode(struct node *root)
{
	queue<struct node*> q;
	q.push(root);
	struct node* temp;
	while(!q.empty())
	{
	   temp=q.front();
		q.pop();
		if(temp->left)
		{
			q.push(temp->left);
		}
		if(temp->right)
		{
			q.push(temp->right);
		}
	}
   
	return temp;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
			node *root=NULL;
		for(int i=0;i<n;i++)
		{
		
			int k;
			cin>>k;
			root=insert(root,k);
		}
		preorder(root);
		cout<<endl;
		levelorder(root);
		cout<<endl;
		struct node* p=deepestnode(root);
		cout<<p<<endl;
		preorder(root);
		cout<<endl;
	}
}
