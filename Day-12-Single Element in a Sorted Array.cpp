#include<bits/stdc++.h>
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        int z;
        for(auto itr = m.begin(); itr != m.end(); itr++)
        {
            int x=itr->second;
            int y=itr->first;
            
            if(x==1)
            {
             z=y;break;   
            }
        }
        return z;
        
    }
};
