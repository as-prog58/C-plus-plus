#include<iostream>
#include<string.h>
using namespace std;

class MyString
{
    char *a;
    int size;

    public:

        MyString()
        {
            
            a=(char *)malloc(1);
            size=1;
        }
        MyString(char *str)
        {
            
            size=strlen(str);
            a=(char *)malloc(size+1);
          strcpy(a,str);

        }
        MyString(MyString &s)
        {
            size=s.size;
            a=(char *)malloc(size+1);
            strcpy(a,s.a);
        }
        void show()
        {
            cout<<a<<endl;
        }
        MyString operator +(MyString s)
        {
            MyString temp;
            temp.size=strlen(a)+strlen(s.a);
            temp.a=(char *)malloc(size+2);
            strcpy(temp.a,a);
            strcat(temp.a,s.a);

            return temp;



        }
};

int main()
{
    MyString s1;
    MyString s2("AShish Gupta");
    s2.show();
    MyString s3=s2;
    s3.show();
    MyString s4;
    s4=s2+s3;
    s4.show();



    return 0;
}