#include <algorithm>
#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int area = 0;
        int left = 0;
        int right = static_cast<int>(height.size()) - 1;
        while (left < right) {
            int h = std::min(height[left], height[right]);
            area = std::max(area, h * (right - left));
            if (height[left] > height[right]) {
                --right;
            } else {
                ++left;
            }
        }
        return area;
    }
};
