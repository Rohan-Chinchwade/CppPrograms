#include<iostream>
#include<stack>
using namespace std;
bool validParentheses(string& str,int n)
{
    stack<char> stack;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='{'||str[i]=='('||str[i]=='[')
            stack.push(str[i]);
        else 
        {
           if(!stack.empty() && (stack.top()=='{' && str[i]=='}')||(stack.top()=='(' && str[i]==')')||(stack.top()=='[' && str[i]==']'))
           {
               stack.pop();
           }
        }
    }
    return stack.empty();
}
int main()
{
    string str="{(}";
    int n=str.length();
    if(validParentheses(str,n))
    {
        cout<<"Valid parentheses";
    }
    else
    {
        cout<<"Not valid..";
    }
}