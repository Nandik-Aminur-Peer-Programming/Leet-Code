//1528. Shuffle String

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int>indices;
    cin>>s;
    int num;
    for(int i=0;i<8;++i)
    {
        cin>>num;
        indices.push_back(num);
    }
    
    int size=indices.size();
    string ar=s;
    for(int i=0;i<s.length();++i)
        ar[indices[i]]=s[i];
    
    cout<<ar;
    return 0;
    
}