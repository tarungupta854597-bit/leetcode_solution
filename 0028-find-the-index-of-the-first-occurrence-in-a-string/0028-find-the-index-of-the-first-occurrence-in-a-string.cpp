class Solution {
public:
    int strStr(string haystack, string needle) {
        string a="";
        for(int i=0;i<needle.size();i++)
        {
            a+=haystack[i];
        }
        for(int i=needle.size()-1;i<haystack.size();i++)
        {
            if(a==needle)
            {
                return i-a.size()+1;
            }
            else
            {
                cout<<a<<" ";
                a+=haystack[i+1];
                a.erase(0,1);
            }
        }
        return -1;
    }
};