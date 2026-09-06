class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> result;
        for(int i=0;i<arr.size();i++)
        {
            result[arr[i]]++;
        }
        int a=-1;
        int max=INT_MIN;
        for(auto x:result)
        {
            if(x.first==x.second)
            {
                max=x.second;
            }
            if(a<max)
            {
                a=x.second;
            }
            

        }
        return a;
    }
};