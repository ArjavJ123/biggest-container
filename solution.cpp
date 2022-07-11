class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0, j = height.size() -1;
        int width = (j-i);
        int maxi = 0;
        while(i < j) {
           int width = j - i;
            maxi = max(maxi, min(height[i], height[j]) * width);
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxi;
    }
};
