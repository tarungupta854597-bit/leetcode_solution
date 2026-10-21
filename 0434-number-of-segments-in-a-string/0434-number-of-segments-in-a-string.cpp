class Solution {
public:
    int countSegments(string s) {
        stringstream a(s);
        string word;
        int count=0;
        while(a>>word)
        {
            count++;
        }
        return count;
    }
};