class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
    vector<int> arr;
    int length=0;
    int line=1;
    for(int i=0;i<s.size();i++)
    {
        if(length+widths[s[i]-'a']>100)
        {
            length=0;
            line++;
        }
        length+=widths[s[i]-'a'];

    }
    // if(length%100!=0)
    // {
    //     line++;
    // }
    arr.push_back(line);
    if(length>100){
    arr.push_back(length%100);
    }
    else
    {
        arr.push_back(length);
    }
    return arr;
        
    }
};