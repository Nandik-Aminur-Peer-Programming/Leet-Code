//242. Valid Anagram

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
        cout<<"false";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
