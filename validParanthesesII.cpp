//921. Minimum Add to Make Parentheses Valid

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
    stack<char>stack;
    int cnt=0;
    for(int i=0;i<s.length();++i)
    {
        if(stack.empty())
        {
            stack.push(s[i]);
            cnt++;
        }
        
        else if(stack.top()=='(' && s[i]==')')
        {
            stack.pop();
            cnt--;
        }
        else
        {
            stack.push(s[i]);
            cnt++;
        }
    }
    if(cnt==0)
        cout<<"0";
    else
        cout<<cnt;

    return 0;
}