class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v1,v2,v3,v4;
        for(int i=0;i<nums.size();i++)
        {
            int x=abs(nums[i]);
            if(nums[i]<0)
            {
                v4.push_back(x*x);
            }
            else
            {
               v2.push_back(x*x); 
            }
        }
        for(int i=v4.size()-1;i>=0;i--)
        {
            v1.push_back(v4[i]);
        }
        int ptr1=0,ptr2=0;
        while(1)
        {
            if(ptr1>=v1.size() && ptr2>=v2.size())
            {
                break;
            }
            else if(ptr1<v1.size() && ptr2>=v2.size())
            {
                v3.push_back(v1[ptr1]);
                ptr1++;
            }
            else if(ptr2<v2.size() && ptr1>=v1.size())
            {
               v3.push_back(v2[ptr2]);
                ptr2++; 
            }
            else if(v1[ptr1]<v2[ptr2])
            {
                v3.push_back(v1[ptr1]);
                ptr1++;
            }
            else if(v1[ptr1]>v2[ptr2])
            {
               v3.push_back(v2[ptr2]);
                ptr2++; 
            }
             else if(v1[ptr1]==v2[ptr2])
            {
               v3.push_back(v2[ptr2]);
                 v3.push_back(v2[ptr2]);
                ptr2++;
                 ptr1++;
            }
        }
        return v3;
    }
};