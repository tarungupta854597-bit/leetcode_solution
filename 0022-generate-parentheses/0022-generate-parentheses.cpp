void generate(int n,vector<string> &a,string res,int open,int close)
{
    if(res.size()==n)
    {
        a.push_back(res);
        return;
    }
    if(open<n/2)
    {
        res.push_back('(');
        generate(n,a,res,open+1,close);
        res.pop_back();
    }
    if(close<open)
    {
        res.push_back(')');
        generate(n,a,res,open,close+1);
         res.pop_back();

    }
    

}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> a;
        generate(n*2,a,"",0,0);
        return a;
    }
};