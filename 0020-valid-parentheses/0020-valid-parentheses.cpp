class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(auto x:s)
        {
            if(x=='(' || x=='[' || x=='{')
            {
                a.push(x);
            }
            else if(a.empty())
            {
              return false;
            }
            else if(x==')' && a.top()=='(' || x=='}'&&  a.top()=='{' || x==']' && a.top()=='[')
            {
                a.pop();
            }
            else{
            return false;
            }
        }
        return (a.empty());
    }
};