class Solution {
public:
    bool isPowerOfThree(int n) {
        int i=0;
        while(i<31)
        {
           if(pow(3,i)==n)
           {
            return true;
           }
           i++;
        }
    return false;
    }
};