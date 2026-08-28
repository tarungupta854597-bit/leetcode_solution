class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int arr[26]={0};
        int arr2[26]={0};
        int result=0;
        for(int i=0;i<stones.size();i++)
        {
            if(isupper(stones[i]))
            {
                arr2[stones[i]-'A']++;
            }
            else
            {
                arr[stones[i]-'a']++;
            }
        }
        for(int i=0;i<jewels.size();i++)
        {
            if(isupper(jewels[i]))
            {
                result+=arr2[jewels[i]-'A'];
            }
            else
            {
                result+=arr[jewels[i]-'a'];
            }
        }
        return result;
    }
};