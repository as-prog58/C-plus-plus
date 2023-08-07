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
   friend complex operator +(complex x,complex y);
    friend ostream & operator <<(ostream &os,complex);
    friend istream & operator >>(istream &os,complex &);
    complex operator -()
    {
        complex temp;
        temp.a=-a;temp.b=-b;
        return temp;
    }
    complex operator -(complex c)
    {
        complex temp;
        temp.a=a-c.a;  temp.b=b-c.b;
        return temp;
    }
    complex operator *(complex c)
    {
        complex temp;
        temp.a=a*c.a-b*c.b;  temp.b=a*c.b+b*c.a;
        return temp;
    }
    int operator ==(complex c)
    {
        if(a==c.a&&b==c.b)
        return 1;
        else 
        return 0;
    }
    complex operator ++()
    {
        complex temp;
        temp.a=++a;
        temp.b=++b;
        return temp;
    }

    complex operator ++(int n)
    {
        complex temp;
        temp.a=a++;
        temp.b=b++;
        return temp;
    }

    
      
};
 complex operator +(complex x,complex y)
    {
        complex temp;
        temp.a=x.a+y.a;  temp.b=x.b+y.b;
        return temp;
    }
    ostream & operator <<(ostream &os,complex c)
    {
        os<<"Real="<<c.a<<" Img="<<c.b<<endl;

        return os;
    }
    istream & operator >>(istream &os,complex &c)
    {
        cout<<"enter values for a and b of  complex class\n";
        cin>>c.a>>c.b;

        

        return os;
    }

int main()
{
    complex c1;
    complex c2,c3,c4;
    
    c1.setdata(3,4);
    c2.setdata(8,4);
   if(c1==c2)
    cout<<"both complex numbers are equal\n";
    c3=c1*c2;
    //c3=c1-c2;
    c3.showdata();
    c4=c1+c2+c3;


    c4.showdata();

    c4=-c4;
    c4.showdata();

    c4=-c1+c2;
    c4.showdata();
    cout<<c2<<c1;
    cout<<c2++<<++c1;
    complex c6;
    c6=c2;
    cout<<c6;
    cin>>c6;
    cout<<c6;

    return 0;
}