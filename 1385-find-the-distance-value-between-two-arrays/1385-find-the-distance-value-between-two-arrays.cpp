class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int i=0;i<arr1.size();i++)
        {
            int a=0;
            int j=arr2.size();
            while(a<=j)
            {
                int mid=(a+j)/2;
                if(abs(arr1[i]-arr2[mid])<=d)
                {
                    count++;
                    break;
                }
                else if(arr1[i]<arr2[mid])
                {
                    j=mid-1;
                }
                else
                {
                    a=mid+1;
                }
            }
        }
        return arr1.size()-count;

    }
};