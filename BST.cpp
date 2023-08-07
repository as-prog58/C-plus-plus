#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    

    node(int v)
    {
        data=v;
        left=right=NULL;
    }
    node()
    {

    }

};

node * insert(node *root,int v)
{
    if(root==NULL)
    {
        node *temp=new node(v);
        return temp;
    }
    if(v>root->data)
    {
        root->right=insert(root->right,v);
    }
    else if(v<root->data)
    {
        root->left=insert(root->left,v);
    }

    return root;
}
node * search(node * root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
       return root;
   else if(key>root->data)
       return search(root->right,key);
    else
       return search(root->left,key);
}

node *getmin(node *root)
{
    if(root->left==NULL)
    return root;

    return getmin(root->left);
}

node * delete_node(node *root,int val)
{
    if(root==NULL)
    return root;

    else if(val>root->data)
    root->right=delete_node(root->right,val);

    else if(val<root->data)
    root->left=delete_node(root->left,val);

    
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        else if(root->left==NULL)
        {
            node *temp=root->right;
            delete root;

            return temp;
        }

        else if(root->right==NULL)
        {
            node *temp=root->left;
            delete root;

            return temp;
        }

        else
        {
            struct node *t=getmin(root->right);
            root->data=t->data;

            root->right=delete_node(root->right,t->data);
        }
    }


    
}

void inorder(node *root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    node * root=NULL;

    root=insert(root,100);
    root=insert(root,50);
    root=insert(root,200);
    root=insert(root,23);
    root=insert(root,150);
    root=insert(root,300);

    inorder(root);
      cout<<endl;
    root=delete_node(root,300);
    inorder(root);

      cout<<endl;
    root=delete_node(root,100);
    inorder(root);
    cout<<endl;

   node *temp= search(root,23);
   if(temp->data==23)
   cout<<"present"<<endl;
   else
   cout<<"not present"<<endl;
   


    return 0;
}