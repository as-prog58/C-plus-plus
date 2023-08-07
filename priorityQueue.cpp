#include<iostream>
using namespace std;

class P_Queue
{
    int queue[5];
    int rear;
    int front;
    int size;

    public:

    P_Queue()
    {
        rear=-1;
        front=-1;
        size=5;
    }
    void Enqueue(int x)
    {
        if(rear==-1)
        {
            rear++;
            front++;
            queue[rear]=x;
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
                if(x>queue[i])
                {
                    break;
                }
              }
                 for(j=rear;j>=i;j--)
                 {
                    queue[j+1]=queue[j];
                 }

                 queue[j+1]=x;
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
           int data=queue[front];
           rear=front=-1;

           return data;
       }
        else
        {
            return queue[front++];
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
            cout<<queue[i]<<" ";

            cout<<endl;
        }
    }


};

int main()
{
     P_Queue pq;
     pq.Enqueue(10);
     pq.Enqueue(78);
     pq.Enqueue(23);
     pq.print();

     pq.Enqueue(11);
     pq.Enqueue(18);
     pq.Enqueue(91);
     pq.print();

     pq.Dequeue();

     pq.print();
    return 0;
}