class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //vector<int>v1;
        int x,sum=0;;
      for(int i=0;i<prices.size()-1;i++)
          {
           x=prices[i+1]-prices[i];
         if(x>0)
             {
             sum+=x;
         }
      }
        return sum;
    }
};