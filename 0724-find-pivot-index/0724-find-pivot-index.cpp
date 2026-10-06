class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int leftsum[nums.size()];
     int rightsum[nums.size()];
     int a=0;
     for(int i=0;i<nums.size();i++)
     {
        a+=nums[i];
        leftsum[i]=a;
       
     }
     int b=0;
     for(int i=nums.size()-1;i>=0;i--)
     {
        b+=nums[i];
        rightsum[i]=b;
     }
     for(int i=0;i<nums.size();i++)
     {
        if(leftsum[i]==rightsum[i])
        {
            return i;
        }
     }
      return -1;
    }
};