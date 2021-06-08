//1598. Crawler Log Folder

#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<string>logs;
    int n,ctr=0;
    cin>>n;
    string str;
    for(int i=0;i<n;++i)
    {
        cin>>str;
        logs.push_back(str);
    }
    stack<string>s;
    for(int i=0;i<logs.size();++i)
    {
        if(logs[i]=="../" && !s.empty())
            s.pop();
        else if(logs[i]=="./")
            continue;
        else if(logs[i]!="../")
            s.push(logs[i]);
    }
    if(s.empty())
        cout<<"0";
    else
    {
        while(!s.empty())
        {
            s.pop();
            ctr++;
        }
        cout<<ctr;
    }
	return 0;
}
