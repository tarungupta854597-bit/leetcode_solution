class Solution {
public:
    int maxPower(string s) {
        int mx=1;
        int a=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                a++;
            }
            else
            {
                a=1;
            }
            mx=max(a,mx);

        }
        return mx;
    }
};