class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v1;
        vector<int>v2,v3;
        v2.push_back(1);
        v3.push_back(1);
        v3.push_back(1);
        v1.push_back(v2);
        if(numRows==1)
            { return v1;}
        v1.push_back(v3);
        if(numRows==2)
            { return v1;}
        if(numRows>2)
            {
            for(int i=2
;i<numRows;i++)
                {
                int s=0;
                vector<int>v4;
                v4.push_back(1);
               for(int j=0;j<v1[i-1].size()-1;j++)
                   {
                   s=v1[i-1][j]+v1[i-1][j+1];
              v4.push_back(s);
               }
                v4.push_back(1);
                v1.push_back(v4);
            }
        }
        return v1;
    }
};