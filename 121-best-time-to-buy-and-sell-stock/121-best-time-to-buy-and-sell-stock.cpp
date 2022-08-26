class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],mx=prices[0];
        int ans=0,pa=0,l=prices.size();
        for(int i=1;i<l;i++)
        {
            if(prices[i]<mn)
            {
                mn=prices[i];
                mx=0;
            }
            else if(prices[i]>mx)
            {
                int x=prices[i]-mn;
                if(x>ans)
                {
                  mx=prices[i];
                  ans=mx-mn;  
                }
            }
        }
        return ans;
    }
};