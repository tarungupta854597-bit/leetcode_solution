class Solution {
public:
    int minOperations(string s) {
        string temp=s;
        sort(s.begin(),s.end());
        if(temp==s)
        {
            return 0;
        }
        if (s.size()==2)
        {
            return -1;
        }
        char a=s[0];
        char b=s[s.size()-1];
        int x=-1,y=-1;
        for(int i=0;i<s.size();i++)
        {
            if(temp[i]==a && x==-1)
            {
                x=i;
            }
            if(temp[i]==b)
            {
                y=i;
            }
        }
        if(y==0  && x==s.size()-1)
        {
            return 3;
        }
        if(x==0 || y==s.size()-1)
        {
            return 1;
        }
        return 2;
    }
};