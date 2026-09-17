class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            bool flag=false;
            int k=words[i].size()-1;
            if(words[i].size()==1)
            {
                return words[i];
            }
            for(int j=0;j<words[i].size()/2;j++)
            {
                if(words[i][j]==words[i][k])
                {
                flag =true;
                }
                else
                {
                    flag=false;
                    break;
                }
                k--;
            }
            if(flag)
            {
                return words[i];
            }
        }
        return "";
    }
};