#include<iostream>
using namespace std;

class CircularQueue
{
        int q[5];
        int front;
        int rear;
        int size;

    public :

        CircularQueue()
        {
            front = -1;
            rear = -1;
            size =  5;
        }


        void Enqueue(int v)
        {
            if(rear == -1)
            {
                rear++;
                front++;
                q[rear] = v;
            }
            else if((rear+1)%size == front)
            {
                cout<<"Overflow"<<endl;
            }
            else{
                rear = (rear+1)%size;
                q[rear] = v;
            }
        }

        void Dequeue()
        {
            if(front == -1)
            {
                cout<<"Underflow"<<endl;
            }
            else if(rear == front)
            {
                cout<<q[front]<<" deleted"<<endl;
                rear = front = -1;
            }
            else{
                cout<<q[front]<<" deleted"<<endl;
                front = (front+1)%size;
            }
        }

      void print()
        {
            if(front == -1)
            {
                cout<<"Queue is Empty"<<endl;
                return;
            }
            int i = front;
            while(1)
            {
                cout<<q[i]<<" ";
                 if(i == rear)
                    break;
                i = (i+1)%size;
            }
            cout<<endl;
        }
};

int main()
{
    CircularQueue q;
    q.Enqueue(5);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);
    q.print();

    q.Dequeue();
    q.Dequeue();
    q.print();

    q.Enqueue(60);
    q.Enqueue(70);
    q.Enqueue(80);
    q.print();

    return 0;
}
