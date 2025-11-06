#include <algorithm>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int insert = 0;
        for (int value : nums) {
            if (value != 0) {
                nums[insert++] = value;
            }
        }
        std::fill(nums.begin() + insert, nums.end(), 0);
    }
};
