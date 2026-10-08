class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>  a;
        for(int x:arr)
        {
            a[x]++;
        }
          unordered_set<int> g;
        for (auto [key, value] :a) {
            if (g.count(value)) {
                return false;
            }

            g.insert(value);
        }

        return true;
    }
};