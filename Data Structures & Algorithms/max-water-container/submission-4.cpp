class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max = 0;

        while (left < right) {
            bool moveLeft = false;
            if (heights[left] < heights[right]) moveLeft = true;
            int area = (right - left) * min(heights[left], heights[right]);
            if (area > max) max = area;
            if (moveLeft) {
                left++;
            } else {
                right--;
            }
        }
        return max;
    }
};
