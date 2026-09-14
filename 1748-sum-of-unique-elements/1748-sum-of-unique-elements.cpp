class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> result;
        for(int i=0;i<nums.size();i++)
        {
            result[nums[i]]++;
        }
        int r=0;
        for(auto x:result)
        {
            if(x.second==1)
            {
              r+=x.first;
            }
        }
        return r;
        
    }
};