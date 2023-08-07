#include<iostream>
using namespace std;

class complex 
{
    private:
    int a,b;

    public:
      void setdata(int x,int y)
       {a=x;  b=y;}
      void showdata()
       {cout<<"Real="<<a<<" img="<<b<<endl;}
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;  temp.b=b+c.b;
        return temp;
    }

    complex(int x,int y)
      {a=x;  b=y;}
   complex(int x)                             //constructur
     {a=x;  b=0;}
    complex()
      {a=0;  b=0;}

    complex(complex &c)
    {
        a=c.a; b=c.b;                   // copy constructor
    }

      ~complex()
      {
        cout<<"byy\n";                        //destructor
      }
};

int main()
{
    complex c1(3,4);
    complex c2(5,6),c3(2),c4;
    complex c5=c4;
    c4=c2.add(c1);

    c4.showdata();
    c5.showdata();

    return 0;
}