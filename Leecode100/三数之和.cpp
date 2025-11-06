#include <algorithm>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::sort(nums.begin(), nums.end());  // 排序

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            if (nums[i] > 0) {
                break;  // 最小值都 >0 ，不可能再组成 0
            }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;  // 去重
            }

            int left = i + 1;
            int right = static_cast<int>(nums.size()) - 1;

            while (left < right) {
                const int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {
                        ++left;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        --right;
                    }
                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        return res;
    }
};
