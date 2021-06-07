//1047. Remove All Adjacent Duplicates In String

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,temp="";
	cin>>s;
    stack <char> stack;
    for(int i=0;i<s.length();++i)
    {
        if(stack.empty())
            stack.push(s[i]);
        else if(stack.top()==s[i])
            stack.pop();
        else
            stack.push(s[i]);
    }
    while(!stack.empty())
    {
        temp+=stack.top();
        stack.pop();
    }
    reverse(temp.begin(),temp.end());
    cout<<temp;
	return 0;
}
