int min1(vector<int> nums)
{
    int a=INT_MAX;
    for(int i=0;i<nums.size();i++)
    {
       if(nums[i]<a)
       {
        a=nums[i];
       }
    }
    return a;
}
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
           int mi= *min_element(nums.begin() + i, nums.end());
           if((max-mi)<=k)
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