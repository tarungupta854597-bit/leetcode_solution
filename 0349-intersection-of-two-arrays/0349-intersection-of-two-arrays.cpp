class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        unordered_map<int ,bool> result;
        for(int i=0;i<nums1.size();i++)
        {
            result[nums1[i]]=true;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(result.find(nums2[i]) != result.end())
            {
                result[nums2[i]] = false;
            }
        }
        for(auto x:result)
        {
            if(x.second==false)
            {
                a.push_back(x.first);
            }
        }
      return a;
        
    }
};