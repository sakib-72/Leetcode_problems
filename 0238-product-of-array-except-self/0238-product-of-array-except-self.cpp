class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v1;
        int mult=1,mult2=1,x,l=nums.size(),c0=0,zeroIndex;
        for(int i=0;i<l;i++)
        {
            mult=mult*nums[i];
            if(nums[i]==0)
            {
                c0++;
                zeroIndex=i;
            }
        }
        if(c0>1)
        {
            for(int i=0;i<l;i++)
            {
                v1.push_back(0);
            }
            return v1;
        }
        else if(c0==1)
        {
            for(int i=0;i<l;i++)
            {
                if(nums[i]!=0)
                {
                    mult2=mult2*nums[i];
                }
            }
            for(int i=0;i<l;i++)
            {
                if(i==zeroIndex)
                {
                    v1.push_back(mult2);
                }
                else
                {
                    v1.push_back(0);
                }
            }
            return v1;
        }
        for(int i=0;i<l;i++)
        {
           x=mult*pow(nums[i],-1); 
            v1.push_back(x);
        }
        return v1;
    }
};