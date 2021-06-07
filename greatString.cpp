//1544. Make The String Great
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str,tmp="";
	cin>>str;
    stack<char>s;
    for(int i=0;i<str.length();++i)
    {
        if(s.empty())
            s.push(str[i]);
        
        else if(tolower(s.top())==tolower(str[i]))
        {
            if(s.top()!=str[i])
                s.pop();
            else
                s.push(str[i]);
        }
        else
            s.push(str[i]);
    }
    while(!s.empty())
    {
        tmp+=s.top();
        s.pop();
    }
    reverse(tmp.begin(),tmp.end());
    cout<<tmp;
    return 0;
}