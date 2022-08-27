class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int d=0,ptr=1,l=nums.size(),x=nums[0];
        
        for(int i=1;i<nums.size();i++)
            {
            if(nums[i]==x)
                {
                d++;
            }
            else
                {
                nums[ptr]=nums[i];
                ptr++;
                x=nums[i];
            }
        }
        return l-d;
    }
};