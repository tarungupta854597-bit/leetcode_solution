class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++)
        {
            string age="";
            age+=details[i][11];
            age+=details[i][12];
             int age2=stoi(age);
             if(age2>60)
             {
                count++;
             }

        }
        return count;
    }
};