int solve(long long  n)
{
    int a=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            return a+1+min(solve(n+1),solve(n-1));
        }
        a++;
    }
        return a;
}
class Solution {
public:
    int integerReplacement(int n) {
        
        return solve(n);
    }
};