//350. Intersection of Two Arrays II
#include<bits/stdc++.h>
using namespace std;

void intersect(vector<int>&nums1,vector<int>&nums2)
{
    if(nums1.size()>nums2.size())
        return intersect(nums2,nums1);
    
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    vector<int>res;
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size())
    {
        if(nums1[i]==nums2[j])
        {
            res.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j])
            i++;
        else
            j++;
    }
    for(i=0;i<res.size();++i)
        cout<<res[i]<<" ";
}
int main()
{
    vector<int>nums1;
    vector<int>nums2;
    int m,n,data;
    cin>>m>>n;
    for(int i=0;i<m;++i)
    {
        cin>>data;
        nums1.push_back(data);
    }
    for(int i=0;i<n;++i)
    {
        cin>>data;
        nums2.push_back(data);
    }

    intersect(nums1,nums2);
    return 0;
}