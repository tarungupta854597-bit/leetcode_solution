class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res=0;
        stack<int> s;
        for(int i=0;i<tokens.size();i++)
        {
            if(isdigit(tokens[i][0]) ||( tokens[i][0]=='-' && tokens[i].size()>1))
            {
                s.push(stoi(tokens[i]));
            }
            else
            {
                char op=tokens[i][0];
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();

                switch(op)
                {
                    case '-':
                    res=y-x;
                    break;
                    case '+':
                    res=y+x;
                    break;
                    case '*':
                    res=y*x;
                    break;
                    case '/':
                    res=y/x;
                    break;
                }
                s.push(res);

            }
        }
        return s.top();
    }
};