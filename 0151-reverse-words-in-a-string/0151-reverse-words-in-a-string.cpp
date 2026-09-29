
class Solution {
public:
    string reverseWords(string s) {
        string result="";
       stringstream a(s);
       vector<string> y;
       string word;
       while(a>>word)
       {
        y.push_back(word);

        }
       for(int i=y.size()-1;i>=0;i--)
       {
        result+=y[i]+' ';
       }
       result.pop_back();
      return result;
    }
};