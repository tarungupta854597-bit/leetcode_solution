int cat(int n,vector<int> &DAT)
{
        int result=0;
        if(n<=1)
        {
            return 1;
        }
        if(DAT[n]!=-1)
        {
            return DAT[n];
        }
        else{
        for(int i=0;i<n;i++)
        {
            result+=cat(i,DAT)*cat(n-i-1,DAT);
            DAT[n]=result;
        }
        }
        return DAT[n];
}
class Solution {
public:
    int numTrees(int n) {
       vector<int> DAT(n+1,-1);
       return cat(n,DAT);  
    }
};