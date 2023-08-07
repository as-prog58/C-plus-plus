#include<iostream>
using namespace std;

class BTree
{
    
     int arr[20];
     int size;
     public:

     BTree()
     {
        size=20;
        int i;
        for(i=0;i<size;i++)
        arr[i]=0;
     }

     void insert(int index,int value)
     {
        if(index==1)
        {
            arr[index]=value;
        }

        else if(arr[index/2]!=0 && index<size)
        {
            arr[index]=value;
        }

        else
        {
            cout<<"parent of index "<<index<<" does not exit"<<endl;
        }
     }

     void insertLeftChild(int in,int v)
     {
        if(arr[in]!=0&&(2*in)<size)
        {
            arr[2*in]=v;
        }
        else
        {
            cout<<"parent does not exit or overflow"<<endl;
        }
     }

     void insertRightChild(int in,int v)
     {
        if(arr[in]!=0&&(2*in+1)<size)
        {
            arr[2*in+1]=v;
        }
        else
        {
            cout<<"parent does not exit or overflow"<<endl;
        }
     }

     void print()
     {
        int i;
        for(i=1;i<size;i++)
        {
            if(arr[i]!=0)
              cout<<arr[i]<<" ";

              else
              cout<<" - ";
        }

        cout<<endl;
     }
};

int main()
{
    BTree t1;
    t1.insert(1,20);
    t1.insertLeftChild(1,40);
    t1.insertLeftChild(2,77);
    t1.insertRightChild(2,88);
    t1.print();
    t1.insertLeftChild(5,11);
    t1.print();


    return 0;
}