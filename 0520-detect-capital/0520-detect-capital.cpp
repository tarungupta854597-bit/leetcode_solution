class Solution {
public:
    bool detectCapitalUse(string word) {
        int a=0;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
            {
                a++;
            }
        }
        return (a==word.size() || (a==1  && isupper(word[0])) || a==0);
        
    }
};