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
            while(i<j && height[i]<=h)
            {
                i++;
            }
            while(i<j && height[j]<=h)
            {
                j--;
            }
        }
        return area;
    }
};