class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> min1(nums.size());
        int min2=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<min2)
            {
                min2=nums[i];
            }
             min1[i]=min2;
        }      
        int max=nums[0];  
        for(int i=0;i<nums.size();i++)
        {
          if(max-min1[i]<=k)
          {
            return i;
          }
          if( i+1<nums.size() && max<nums[i+1])
          {
            max=nums[i+1];
          }
        }
        return -1;
    }
};