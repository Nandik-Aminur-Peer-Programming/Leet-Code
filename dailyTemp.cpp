//739. Daily Temperatures

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>temperature;
    int size;
    for(int i=0;i<8;++i)
    {
        cin>>size;
        temperature.push_back(size);
    }
    int n=temperature.size();
    vector<int>answer(n,0);
    stack<int>s;
    
    for(int i=0;i<n;++i)
    {
        while(!s.empty() && temperature[s.top()]<temperature[i])
        {
            answer[s.top()]=i-s.top();
            s.pop();
        }
        s.push(i);
    }
    for(int i=0;i<n;++i)
        cout<<answer[i]<<" "; 
    return 0;
}