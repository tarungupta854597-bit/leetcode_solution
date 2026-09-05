class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,bool> count;
        for(int i=0;i<nums.size();i++)
        {
            if(count[nums[i]]==true)
            {
                return nums[i];
            }
            count[nums[i]]=true;
        }
        return -1;
    }
};