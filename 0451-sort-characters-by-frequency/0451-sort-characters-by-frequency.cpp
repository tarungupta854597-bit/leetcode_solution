class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> a;
        for(char x:s)
        {
            a[x]++;
        }
        vector<pair<char, int>> h(a.begin(),a.end());
        sort(h.begin(),h.end(),[](auto& a,auto &b){
            return a.second>b.second;
        });
        string result="";
        for(int i=0;i<h.size();i++)
        {
            for(int j=0;j<h[i].second;j++)
            result+=h[i].first;
        }
        return result;
    }
};