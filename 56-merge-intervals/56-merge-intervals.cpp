class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>>v1;
        if(intervals.size()==0)
        {
            return v1;
        }
        sort(intervals.begin(),intervals.end());
        v1.push_back(intervals[0]);
        int ptr=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(v1[ptr][1]>=intervals[i][0])
            {
                v1[ptr][1]=max(v1[ptr][1],intervals[i][1]);
            }
            else
            {
                ptr++;
                v1.push_back(intervals[i]);
            }
        }
        return v1;
    }
};