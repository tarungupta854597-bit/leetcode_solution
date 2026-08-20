class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n=candies.size();
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(max<candies[i])
            {
                max=candies[i];
            }
        }
        for(int i =0;i<n;i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
        
    }
};