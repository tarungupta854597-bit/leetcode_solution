inline bool vowel(char a)
{
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        return true;
    }
    return false;
}
class Solution {
public:
    string reverseVowels(string a) {
        int i=0;
        int b=a.size()-1;
        while(i<b)
        {
            if(vowel(tolower(a[i])) && vowel(tolower(a[b])))
            {
                swap(a[i],a[b]);
                i++;
                b--;
            }
            if(!vowel(tolower(a[i])))
            {
                i++;
            }
            if(!vowel(tolower(a[b])))
            {
                b--;
            }
        }
        return a;
    }
};