#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int fact(int);
    int x;
    float ans,ans1;
    cout<<"enter value of x";
    cin>>x;
    ans=sin(x);
    ans1=x-(pow(x,3)/fact(3))+(pow(x,5)/fact(5))-(pow(x,7)/fact(7));
    cout<<ans<<"\n"<<ans1;

    return 0;


}
int fact(int x)
{
    int i;
    int factorial=1;
    for(i=1;i<=x;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
