class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        if(m*n!=r*c)
        {
          return mat;  
        }
        else
        {
            vector<int>v1;
            vector<vector<int>>v2;
            for(int i=0;i<mat.size();i++)
            {
                for(int j=0;j<mat[i].size();j++)
                {
                    v1.push_back(mat[i][j]);
                }
            }
            int ptr=0;
            for(int i=0;i<r;i++)
            {
                vector<int>v3;
                for(int j=0;j<c;j++)
                {
                    v3.push_back(v1[ptr]);
                    ptr++;
                }
                v2.push_back(v3);
            }
            return v2;
        }
    }
};