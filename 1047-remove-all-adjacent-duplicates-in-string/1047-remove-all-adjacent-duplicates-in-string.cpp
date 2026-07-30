class Solution {
public:
    string removeDuplicates(string s) {
        string a;
        for(int i=0;i<s.size();i++)
        {
            if(a.empty() || s[i]!=a.back())
            {
                a.push_back(s[i]);
            }
            else
            {
                a.pop_back();
            }
        }
        return a;
        
    }
};