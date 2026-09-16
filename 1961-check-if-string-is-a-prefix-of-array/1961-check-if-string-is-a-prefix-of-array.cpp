class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result="";
        for(auto x:words)
        {
            result+=x;
            if(result==s)
            {
                return true;
            }
        }
        return false;
        
    }
};