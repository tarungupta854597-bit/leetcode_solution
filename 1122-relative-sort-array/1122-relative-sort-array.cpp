class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> freq;
        vector<int> result;
        for(int i=0;i<arr1.size();i++)
        {
            freq[arr1[i]]++;
        }
        int j=0;
        while(j<arr2.size())
        {
          if(freq[arr2[j]]>0)
          {
            result.push_back(arr2[j]);
            freq[arr2[j]]--;
            continue;
          }
          j++;
        }
        auto it=freq.begin();
        while(it!=freq.end())
        {
            if(it->second>0)
            {
                result.push_back(it->first);
                it->second--;
                continue;
            }
            it++;
        }
        return result;
        
    }
};