#include<iostream>
#include<string>
using namespace std;

class create_stack
{
	int stack[100];
	int top;
	
	public:
		
		create_stack()
		{
			top=-1;
		}
		
    void push(int item)
     {
	  if(top==100-1)
    	{
		printf("stack overflow\n");
		return;
	    }
	
	
     	top++;
	   stack[top]=item;
    }
        int pop()
        {
    	   if(top==-1)
	       {
		   printf("stack underflow\n");
		  return -1;
	      }
	
	     return stack[top--];
       }
       
       void print_stack()
    {
	if(top==-1)
	{
		printf("stack underflow\n");
		return ;
	}
	
	int i;
	printf("stack elements are:-\n");
	for(i=top;i>=0;i--)
	printf("%d ",stack[i]);
	
	printf("\n");
   }
   
   
   void delete_middle()
   {
   	  static int i=top;
   	  if(top==i/2)
   	  {
   	  	 pop();
   	  	 return;  
		}
   	   
   	   
   	   int data=pop();
   	   delete_middle();
   	   push(data);
   	   
   	  
   	  
   }
};

int check(string str)
{
	create_stack ss;
	ss.push('*');
	int l=str.size();
	int i;
	
	for(i=0;i<l;i++)
	{
		
		if(str[i]=='(')
		{
			if(str[i+1]==')')
			{
				
			}
			else
			return 0;
		}
		else if(str[i]=='['||str[i]=='{')
		{
			ss.push(str[i]);
		}
		else if(str[i]==']'||str[i]=='}')
		{
			ss.pop();
		}
	}
	
	if(ss.pop()=='*')
	return 1;
	else 
	return 0;
}

int main()
{
	create_stack s1;
	s1.push(23);
	s1.push(24);
	s1.push(25);
	s1.push(26);
	
	s1.print_stack();
	s1.delete_middle();
	s1.print_stack();
	
	string str= "[()]{}{[()()]()}";
	string str1="[(])";
	if(check(str1)==1)
	cout<<"right "<<endl;
	else
	cout<<"wrong"<<endl;
	
}
