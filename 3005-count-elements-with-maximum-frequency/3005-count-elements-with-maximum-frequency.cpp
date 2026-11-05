class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max=0;
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
            if(a[nums[i]]>max)
            {
                max=a[nums[i]];
            }
        }
        int ans=0;
        for(auto x:a)
        {
            if(x.second==max)
            {
               ans+=max;
            }
        }
        return ans;
    }
};