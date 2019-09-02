#include<iostream>
using namespace std;
void inorder(struct tree *root);
void preorder(struct tree *root);
void postorder(struct tree *root);
struct tree
{
int data;

struct tree *l;
struct tree *r;
};

int main()
{
	int n,flag;
	char ch;
 struct tree  *node,*root=NULL, *temp;
	do{
		node= new tree;
	cout<<"data?";
	cin>>n;
	node->data=n;
	node->l=NULL;
	node->r=NULL;
	if (root==NULL)
	{
		root=node;
	}
	else
	{
		flag=1;
		temp=root;
		while (flag !=0)
		{
			if (node->data < temp->data)
			{
				if(temp->l == NULL)
				{temp->l=node;
				flag=0;
			}
			else
			{temp=temp->l;
			}
		}
		else
		{ 
	if(temp->r == NULL)
				{temp->r=node;
				flag=0;
			}
			else
			{temp=temp->r;
			}
	
}
}
}
cout<<"again";
cin>>ch;
}while(ch =='y');
cout<<"inorder"<<endl;
inorder(root);
cout<<"\npreorder"<<endl;
preorder(root);
cout<<"\npostorder"<<endl;
postorder(root);
	return 0;
}

void inorder(struct tree *root)
{
	if(root != NULL)
	{
		inorder(root->l);
		cout<<"\t"<<root->data;
		inorder(root->r);
	}
}
 
void preorder(struct tree *root)
{
	if (root != NULL)
		{cout<<"\t"<<root->data;
		preorder(root->l);
		preorder(root->r);
	}
}
	
	

void postorder(struct tree *root)
{
	
	if (root != NULL)	
	{	postorder(root->l);
		postorder(root->r);
		cout<<"\t"<<root->data;
	}			 
		} 
