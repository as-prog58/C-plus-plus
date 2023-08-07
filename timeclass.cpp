#include<iostream>
using namespace std;

class time
{
    int h,m,s;

    public:

    void setTime(int x,int y,int z)
    {
        h=x;m=y;s=z;
    }
    void showTime()
    {
        cout<<"Hour-"<<h<<" Min-"<<m<<" Sec-"<<s<<endl;
    }
    time addTime(time t)
    {
        time temp;


        temp.s=s+t.s;
         if(temp.s>=60)
         {
            temp.s=temp.s-60;
            m=m+1;
         }
         temp.m=m+t.m;
         if(temp.m>=60)
         {
            temp.m=temp.m-60;
            h++;
         }
         temp.h=h+t.h;

         return temp;
    }
    friend void operator >>(istream &os,time &t);
    friend void operator <<(ostream &os,time t);
    
};
void operator >>(istream &os,time &t)
    {
        cout<<"Enter time in HH:MM:SS format\n";
          cin>>t.h>>t.m>>t.s;
    }
    void operator <<(ostream &os,time t)
    {
        cout<<"Hour-"<<t.h<<" Min-"<<t.m<<" Sec-"<<t.s<<endl;
    }

int main()
{
    time t1,t2;
    t1.setTime(4,25,54);
    t1.showTime();
    t2.setTime(3,45,45);
    t2.showTime();
    time t3;
    t3=t1.addTime(t2);

    cin>>t3;
    
    t3.showTime();
   cout<<t3;
    return 0;

}
