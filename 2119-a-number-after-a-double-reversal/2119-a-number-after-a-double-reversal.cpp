int rev(int num)
{
    int result=0;
    int x;
    while(num>0)
    {
    x=num%10;
    num=num/10;
    result=result*10+x;
    }
    return result;
}
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1=rev(num);
        int rev2=rev(rev1);
        return (rev2==num);
        
    }
};