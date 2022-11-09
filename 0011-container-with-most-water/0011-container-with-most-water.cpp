class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int i=0,j=n-1,h;
        while(i<j)
        {
            h=min(height[i],height[j]);
            area=max(area,h*(j-i));
            if(height[i]<height[j])
            {
                i++;
            }
            else if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
                j--;
            }
        }
        return area;
    }
};