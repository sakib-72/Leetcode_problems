class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>v1,v2,v3;
        int l=nums.size(),x,sum=0,ans,sum2;
        if(l==1)
        {
            ans=0;
            return ans;
        }
        for(int i=0;i<l;i++)
        {
           sum+=nums[i]; 
            v1.push_back(sum);
        }
        sum2=sum;
        sum=0;
        for(int i=l-1;i>=0;i--)
        {
            sum+=nums[i];
            v3.push_back(sum);
        }
        for(int i=l-1;i>=0;i--)
        {
            v2.push_back(v3[i]);
        }
        if(v2[1]==0||l==1)
        {
            ans=0;
            return ans;
        }
        else if(v1[l-2]==0 && sum2-nums[l-1]==0)
        {
            ans=l-1;
            //return ans;
        }
        int ans1=ans;
        for(int i=0;i<l-1;i++)
        {
            if(i==l-2)
            {
                if(v1[i]!=0){ans=-1;
                break;}
            }
            if(v1[i]==v2[i+2])
            {
                ans=i+1;
               if(ans<ans1) ans1=ans;return ans1;
                break;
            }
           
               
               

        }
        
        return ans;
    }
};