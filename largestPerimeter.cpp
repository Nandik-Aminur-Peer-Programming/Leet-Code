//976. Largest Perimeter Triangle

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums;
    int n,data;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>data;
        nums.push_back(data);
    }

    sort(nums.begin(),nums.end(),greater<int>());
    int fl=0,sum=0;
    for(int i=1;i<nums.size();++i)
    {
        if(nums[i]>=nums[i+1]+nums[i-1])
            continue;
        else if(nums[i+1]>=nums[i]+nums[i-1])
            continue;
        else if(nums[i-1]>=nums[i]+nums[i+1])
            continue;
        else
        {
            fl=1;
            sum+=nums[i]+nums[i+1]+nums[i-1];
            break;
        }
    }
    if(fl==1)
        cout<<sum;
    else
        cout<<"0";

    return 0;

}