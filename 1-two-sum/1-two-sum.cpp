class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      

    map<int,int>mp1,mp2;
    for(int i=0;i<nums.size();i++)
    {
        //cin>>nums[i];
        mp1[nums[i]]=i;
        mp2[nums[i]]++;
    }
    //cin>>tar;
    vector<int>v1;
    for(int i=0;i<nums.size();i++)
    {
        int x=nums[i];
        int y=target-x;
        if(mp2[y]>0)
        {
            if(x==y && mp2[y]>1)
            {
                    //cout<<i<<" "<<mp1[y]<<endl;
                    v1.push_back(i);
                    v1.push_back(mp1[y]);
                break;
                    //return 0;
            }
            else if(x==y && mp2[y]<=1)
            {
                continue;
            }
            else
            {
                //cout<<i<<" "<<mp1[y]<<endl;
                    v1.push_back(i);
                    v1.push_back(mp1[y]);
                break;
                    //return 0;
            }
        }
    }

   return v1;
        
    }
};