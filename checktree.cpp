#include<iostream>
#include<queue>
using namespace std;

class BTree
{
    public:

    BTree *left;
    int data;
    BTree *right;

    BTree(int x)
    {
        left=NULL;
        data=x;
        right=NULL;
    }
};

BTree* create_Tree(BTree *root)
{
    root=new BTree(1);
   
    root->left=new BTree(2);
    root->right=new BTree(3);
   
   
    root->left->left=new BTree(4);
    root->left->right=new BTree(5);
    root->right->left=new BTree(6);
    root->right->right=new BTree(7);
    
    return root;
}

void PreOrder_Traversal(BTree *root)
{
    if(root==NULL)
    {
        return;
    }


    
        cout<<root->data<<" ";
        PreOrder_Traversal(root->left);
        PreOrder_Traversal(root->right);
    
}
void levelorder(BTree *root)
{
	if(root==NULL)
	return;
	
	queue<BTree *>q;
	q.push(root);
	
	while(!q.empty())
	{
		BTree *temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		
		if(temp->left!=NULL)
		q.push(temp->left);
		
		if(temp->right!=NULL)
		q.push(temp->right);
	}
	
	
}

int Height(BTree *root)
{
	if(root==NULL)
	return 0;
	
	int LHeight=Height(root->left);
	int RHeight=Height(root->right);
	
	if(LHeight>RHeight)
	return LHeight+1;
	
	else
	return RHeight+1;
}



int main()
{
    BTree *root=NULL;
    root=create_Tree(root);
    PreOrder_Traversal(root);
    cout<<endl;
    levelorder(root);
    cout<<endl;
    
    cout<<Height(root);

    return 0;
    
}


