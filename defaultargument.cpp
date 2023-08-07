#include<iostream>
using namespace std;

 int add(int,int,int=0);
int main()
{
    cout<<add(4,5)<<endl;
    cout<<add(3,7,8);

    return 0;
    
}
int add(int x,int y,int z)
{
    return (x+y+z);
}