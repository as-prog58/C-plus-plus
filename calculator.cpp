#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int prec(char c)
     {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
  
// The main function to convert infix expression
// to postfix expression
string infixToPostfix(string s)
{
  
    stack<char> st;
    string result;
  
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
  
       
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
  
        
        else if (c == '(')
            st.push('(');
  
       
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
  
       else if(c==' ')
       {

       }
        else {
            while (!st.empty()
                   && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
  
   
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
  
    return result;
}

int evalpostfix(string s)
{
    stack<int>stack;
    int ans;
    if(s[0]>='0'&&s[0]<='9')
    stack.push(s[0]-'0');
   for(int i=1;i<s.size();i++)
   {
           if(s[i]>='0'&&s[i]<='9')
           stack.push(s[i]-'0');
           else
           {
               int a=stack.top();
               stack.pop();
               int b=stack.top();
               stack.pop();
               if(s[i]=='+')
               stack.push(a+b);
               if(s[i]=='-')
               stack.push(b-a);
               

           }
   }

   return stack.top();
}
    int calculate(string s) 
    {
        string postfix=infixToPostfix(s);
        return evalpostfix(postfix);
        
    }
    
    int main()
    {
    	string s;
    	cout<<"Enter expression"<<endl;
    	cin>>s;
    	cout<<calculate(s);
    	
	}
