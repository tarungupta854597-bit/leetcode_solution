class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> a;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                a.push(s[i]);
            }
            else if(!empty(a) && a.top()=='(' && s[i]==')')
            {
                a.pop();
            }
            else 
            {
                a.push(s[i]);
            }

        }
        return a.size();
    }
};