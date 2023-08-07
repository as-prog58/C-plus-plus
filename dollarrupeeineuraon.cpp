#include<iostream>
using namespace std;
class Dollar;
class Rupee
{
    float x;

public :

    int getR()
    {
        return x;
    }

    Rupee()
    {
        cout<<"DC Called for Rupee"<<endl;
    }

    Rupee(float n)
    {
        cout<<"PC called for Rupee"<<endl;
        x = n;
    }
    void display()
    {
        cout<<"Rupee is "<<x<<endl;
    }

    operator float()
    {
        cout<<"float() called for Rupee"<<endl;
        return x;
    }

   // operator Dollar();

};
class Dollar
{
    float x;

public :
    Dollar()
    {
        cout<<"DC Called for Dollar"<<endl;
    }

    Dollar(Rupee r)
    {
        cout<<"Dollar(Rupee) for Dollar"<<endl;
        x = r.getR()/100.0;
    }
    Dollar(float n)
    {
        cout<<"PC called for Dollar"<<endl;
        x = n;
    }
    void display()
    {
        cout<<"Dollar is "<<x<<endl;
    }

    operator float()
    {
        cout<<"float() called for Dollar"<<endl;
        return x;
    }

    operator Rupee()
    {
        cout<<"float() called for Dollar"<<endl;
        return x*100.0;
    }
    int getD()
    {
        return x;
    }
};

int main()
{
    float x = 5;
    float y = 6;

    Rupee r = x;
    r.display();
    x = (float)r;

    Dollar d = y;
    d.display();
    y = (float)d;

    r = d;
    r.display();

    d = (Dollar)r;
    d.display();


    return 0;
}
