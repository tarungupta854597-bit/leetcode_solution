class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                a+=tolower(s[i]);
            }
        }
        for(int i=0;i<a.size()/2;i++)
        {
            if(a[i]!=a[a.size()-1-i])
            {
                return false;
            }
        }
        
        return true;
    }
};