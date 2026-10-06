class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    // the approch i have used to solve these problem is prefix sum and suffix sum as we know that if there
    // exist an point where the left sum and right sum are equal then we will return that index or we will return -1;
    // the time complexity is : o(N);
    // space complexity is : o(N);
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