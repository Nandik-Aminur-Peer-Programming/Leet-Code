//20. Valid Parentheses
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
    stack<char>stack;
    int fl=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stack.push(s[i]);
        
        else if(stack.empty() && s[i]==')')
            cout<<"false";
        
        else if(stack.empty() && s[i]=='}')
            cout<<"false";
        
        else if(stack.empty() && s[i]==']')
            cout<<"false";
        
        else if(s[i]==')' && stack.top()=='(')
            stack.pop();
        
        else if(s[i]=='}' && stack.top()=='{')
            stack.pop();

        else if(s[i]==']' && stack.top()=='[')
            stack.pop();
        
        else
        {
            fl=1;
            break;
        }

    }
    if(stack.empty() && fl==0)
        cout<<"true";
    else  
        cout<<"false";
    
    return 0;
}