class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //vector<long long int>v1;
        int p1=0,cnt=0,l=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[p1]=nums[i];
                p1++;
            }
            else if(nums[i]==0)
            {
              cnt++;  
            }
        }
        for(int i=l-cnt;i<l;i++)
        {
            nums[i]=0;
        }
    }
};