class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        int a;
        int n=nums.size();
        unordered_map<int,int> s;
        for(int i=0;i<n;i++)
        {
            if(s[nums[i]]>0)
            {
                result.push_back(nums[i]);
                a=nums[i];
                break;
            }
            s[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int sumr=n*(n+1)/2;
        //int mis=sumr-(sum-slow);
        result.push_back(sumr-(sum-a));
        return result;
        
    }
};