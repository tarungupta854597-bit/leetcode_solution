class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> a;
        string y="";
        string result="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                a.push(s[i]);
                y+=s[i];
            }
            else if(s[i]==')' && a.top()=='(')
            {
                y+=s[i];
                a.pop();
            }
                 if(empty(a))
            {
               y.erase(0,1);
               y.erase(y.size()-1,1);
               result+=y;
               y="";
            }
        }
        return result;

    }
};