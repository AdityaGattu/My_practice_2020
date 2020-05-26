class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if(nums.size()<=1)
            return 0;

        map<int, int> temp;
        int count = nums[0] == 1 ? 1 : -1;
        temp[0]=-1;
        temp[count]=0;
        int res=0;

        for(int i=1;i<nums.size();i++)
        {
            count = nums[i] == 1 ? count+1 : count-1;
            if(temp.find(count) != temp.end())
                res=max(res, i - temp[count]);
            else
                temp[count]=i;
        }
        return res;
    }
};
