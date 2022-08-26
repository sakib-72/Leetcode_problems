class Solution {
public:
    int fib(int n) {
       vector<long long int>v1;
        //v1.push_back(0);
        v1.push_back(0);
        v1.push_back(1);
        v1.push_back(1);
        for(int i=3;i<=n;i++)
        {
            long long int x=v1[i-1]+v1[i-2];
            v1.push_back(x);
        }
        return v1[n];
        
    }
};