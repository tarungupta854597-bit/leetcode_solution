inline bool vowel(char a)
{
    return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');
}
class Solution {
public:
    int maxFreqSum(string s) {
         vector<int> arr(26,0);
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        int max1=0;
        int max2=0;
        for(int i=0;i<26;i++)
        {
            if(!vowel(i+'a'))
            {
                if(arr[i]>max2)
                 max2=arr[i];
            }
            else if(arr[i]>max1){
                max1=arr[i];
            
            }
        }
        // int max1=max({arr['a'-'a'],arr['e'-'a'],arr['i'-'a'],arr['o'-'a'],arr['u'-'a']});

        return max1+max2;
    }
};