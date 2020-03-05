#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
void inorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
struct node *newnode(int key)
{
	struct node *temp=new node;
	temp->data=key;
	temp->left=temp->right=NULL;
	return temp;
}
void insert(struct node *temp,int key)
{
	queue<struct node*> q;
	q.push(temp);
	while(!q.empty())
	{
		struct node *temp=q.front();
		q.pop();
		if(!temp->left)
		{
			temp->left=newnode(key);
			break;
		}
		else
		{
			q.push(temp->left);
		}
		if(!temp->right)
		{
			temp->right=newnode(key);
			break;
		}
		else
		{
			q.push(temp->right);
		}
	}
}
int main()
{
	struct node* root = newnode(10); 
    root->left = newnode(11); 
    root->left->left = newnode(7); 
    root->right = newnode(9); 
    root->right->left = newnode(15); 
    root->right->right = newnode(8); 
    inorder(root);
    
    int key=12;
    insert(root,key);
    inorder(root);
}
