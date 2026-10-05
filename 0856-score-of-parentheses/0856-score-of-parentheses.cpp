class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>  a;
        a.push(0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                a.push(0);
            }
            else
            {
                int value;
                int x=a.top();
                a.pop();
                if(x==0)
                {
                    value=1;

                }
                else
                {
                    value=2*x;
                }
                a.top()+=value;   
            }
        }
        return a.top();
    }
};