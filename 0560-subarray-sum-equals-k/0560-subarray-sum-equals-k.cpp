class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l=nums.size();
        vector<int>v1;
        v1.push_back(nums[0]);
        int sum=nums[0];
        for(int i=1;i<l;i++)
        {
            sum+=nums[i];
            v1.push_back(sum);
        }
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<l;i++)
        {
            if(v1[i]==k)
            {
                ans++;
            }
            if(mp.find(v1[i]-k)!=mp.end())
            {
                ans+=mp[v1[i]-k];
            }
            mp[v1[i]]++;
        }
        return ans;
    }
};