class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nums[i]*=-1;
            }
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        long long  result=0;
        while(i<j)
        {
           result=result+(nums[j])*nums[j]-(nums[i])*nums[i];
           i++;
           j--;
        }
        if(i==j)
        {
            result+=nums[i]*nums[i];
        }
        return result;
    }
};