#include<iostream>
using namespace std;



class node
{
    

    public:

     int data;
    node *left;
    node *right;

      node(int x)
       {
          data=x;
          right=NULL;
          left=NULL;
       }

   

   

    void preorder()
    {
         if(this==NULL)  return;
         
         else
          {
            cout<<data<<" ";
        left->preorder();
        right->preorder();

          }
    }
    
    
};

int main()
{
    node *root;
       root=new node(1);
   
       root->left=new node(2);
       root->right=new node(3);
   
   
        root->left->left=new node(4);
        root->left->right=new node(5);
        root->right->left=new node(6);
        root->right->right=new node(7);


        root->preorder();
    
}
