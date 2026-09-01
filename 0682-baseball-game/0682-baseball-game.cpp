class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        int i=0;
        int j=-1;
        while(i<operations.size())
        {
            if(isdigit(operations[i][0]) ||   operations[i][0]=='-')
            {
                result.push_back(stoi(operations[i]));
                j++;
            }
            else if(operations[i][0]=='+')
            {
                result.push_back(result[j]+result[j-1]);
                j++;
            }
            else if(operations[i][0]=='D')
            {
                result.push_back(result[j]*2);
                j++;
            }
            else if(operations[i][0]=='C')
            {
                result.pop_back();
                j--;
            }
            i++;
            
        }
        int count=0;
        for(int i=0;i<result.size();i++)
        {
            count+=result[i];
        }
        return count;
    }
};