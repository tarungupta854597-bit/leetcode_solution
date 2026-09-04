class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> city;
        for(int i=0;i<paths.size();i++)
        {
            city[paths[i][0]]++;
            city[paths[i][1]]++;

        }
        for(int i=0;i<paths.size();i++)
        {
            if(city[paths[i][1]]==1)
            return paths[i][1];
        }
        return " ";
        
    }
};