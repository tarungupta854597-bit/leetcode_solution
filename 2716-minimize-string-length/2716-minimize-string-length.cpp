class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> a;
        for(int i=0;i<s.size();i++)
        {
            a.insert(s[i]);
        }
        return a.size();
    }
};