bool check(string s,int i,int j)
{
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
class Solution {
public:
    bool validPalindrome(string s) {
        bool skip=true;
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            if(s[i]!=s[j])
            {
                return check(s,i+1,j) || check(s,i,j-1);
            }
        }
        return true;
    }
};