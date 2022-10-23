class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1(n);
       v1[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            v1[i]=nums[i+1]*v1[i+1];
        }
        int lp=1;
        for(int i=0;i<n;i++)
        {
            v1[i]=v1[i]*lp;
            lp=lp*nums[i];
        }
        return v1;
    }
};