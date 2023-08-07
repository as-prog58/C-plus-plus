#include<iostream>
#include<cstring>
using namespace std;

class person
{
    int Id;
    string Name;
    public:
    void setdata1(string s,int x)
    {
        Name=s;
        Id=x;
    }

    string getName()
    {
        return Name;
    }
    int getId()
    {
        return Id;
    }

    
};

class student : public person
{
       int stdd;
       int school_Roll_no;

       public:

       void setdata2(int s,int r)
       {

        
        stdd=s;
        school_Roll_no=r;
       }
       int getStdd()
       {
        return stdd;
       }

       int getroll()
       {
        return school_Roll_no;
       }

};

int main()
{
    student s1;
    s1.setdata1("Ashish",820);
    s1.setdata2(11,2242);

    cout<<s1.getName()<<endl;
    cout<<s1.getId()<<endl;
    cout<<s1.getStdd()<<endl;
    cout<<s1.getroll()<<endl;
}