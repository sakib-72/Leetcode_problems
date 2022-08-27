class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1;
        map<int,int>mp1,mp2;
        int l=nums1.size(),m=nums2.size();
        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }
        if(l<m)
        {
            for(int i=0;i<l;i++)
            {
                if(mp2[nums1[i]]>0)
                {
                    v1.push_back(nums1[i]);
                    mp2[nums1[i]]--;
                }
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                if(mp1[nums2[i]]>0)
                {
                    v1.push_back(nums2[i]);
                    mp1[nums2[i]]--;
                }
            }
        }
        return v1;
    }
};