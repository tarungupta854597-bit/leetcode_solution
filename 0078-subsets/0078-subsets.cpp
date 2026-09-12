void sub(vector<int> nums,vector<vector<int>> &result,vector<int> res,int a)
{
    if(a==nums.size())
    {
        result.push_back(res);
        return;
    }
    sub(nums,result,res,a+1);

    res.push_back(nums[a]);
    sub(nums,result,res,a+1);
}


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int a=nums.size();
        vector<int> res;
        sub(nums,result,res,0);
        return result;
        
    }
};