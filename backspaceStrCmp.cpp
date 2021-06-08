//844. Backspace String Compare

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
    stack<char>stack;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='#' && !stack.empty())
            stack.pop();
        else if(s[i]!='#')
            stack.push(s[i]);
    }
    s="";
    while(!stack.empty())
    {
        s+=stack.top();
        stack.pop();
    }
    for(int i=0;i<t.length();++i)
    {
        if(t[i]=='#' && !stack.empty())
            stack.pop();
        else if(t[i]!='#')
            stack.push(t[i]);
    }
    t="";
    while(!stack.empty())
    {
        t+=stack.top();
        stack.pop();
    }
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    if(s==t)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
