class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int in1,in2=0,len1=nums1.size(),len2=nums2.size();
        vector<int>v1;
        if(m==0)
        {
            for(int i=0;i<n;i++)
            {
                nums1[i]=nums2[i];
            }
        }
        else if(n==0)
        {
           for(int i=0;i<m;i++)
            {
                nums1[i]=nums1[i];
            } 
        }
         else 
         {
              for(int i=0;i<m;i++)
            {
               if(in2==n)
                {
                    v1.push_back(nums1[i]);
                } 
                else if(nums1[i]<nums2[in2])
                {
                    v1.push_back(nums1[i]);
                }
                else if(nums1[i]==nums2[in2])
                {
                    v1.push_back(nums1[i]);
                    v1.push_back(nums1[i]);
                    in2++;
                }
                else if(nums1[i]>nums2[in2])
                {
                    v1.push_back(nums2[in2]);
                    i--;
                    in2++;
                }
               
            }
            if(in2<=n-1)
            {
                for(int i=in2;i<n;i++)
                {
                    v1.push_back(nums2[i]);
                }
            }
        for(int i=0;i<v1.size();i++)
        {
            nums1[i]=v1[i];
        }
         }
        
    }
};