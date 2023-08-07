#include<iostream>
using namespace std;

class node
{
    public:

    int data;
    int priority;
};

class P_Queue
{
    node queue[20];
    int front,rear;
    int size;
    public:

    P_Queue()
    {
        front=rear=-1;
        size=20;
    }

   
    void Enqueue(int x,int p)
    {
        if(rear==-1)
        {
            rear++;
            front++;
            queue[rear].data=x;
            queue[rear].priority=p;
        }
        else if(rear==size-1)
        {
            cout<<"Overflow"<<endl;
        }
        else
        {
              int i,j;
              for(i=front;i<=rear;i++)
              {
                if(p>queue[i].priority)
                {
                    break;
                }
              }
                 for(j=rear;j>=i;j--)
                 {
                    queue[j+1]=queue[j];
                 }

                 queue[j+1].data=x;
                 queue[j+1].priority=p;
                 rear++;
              
        }
    }

    
    int Dequeue()
    {
        if(rear==-1)
        {
            cout<<"Underflow"<<endl;

        }
       else if(rear==front)
       {
           int data=queue[front].data;
           rear=front=-1;

           return data;
       }
        else
        {
            return queue[front++].data;
        }
    }

    void print()
    {
        int i;
        if(rear==-1)
        cout<<"underflow"<<endl;

        else
        {
            for(i=front;i<=rear;i++)
            cout<<queue[i].data<<" ";

            cout<<endl;
        }
    }


};

int main()
{
    P_Queue pq;

    pq.Enqueue(20,2);
    pq.Enqueue(22,1);
    pq.Enqueue(12,4);

    pq.print();

    pq.Enqueue(23,8);
    pq.Enqueue(44,3);
    pq.print();

    pq.Dequeue();

    pq.print();


    

}
