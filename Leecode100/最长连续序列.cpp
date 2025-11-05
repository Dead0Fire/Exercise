#include <algorithm>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> seen(nums.begin(), nums.end());
        int longest = 0;
        for (int num : seen) {
            if (seen.count(num - 1)) {
                continue;  // skip middle elements
            }
            int current = num;
            int length = 1;
            while (seen.count(current + 1)) {
                ++current;
                ++length;
            }
            longest = std::max(longest, length);
        }
        return longest;
    }
};
//st的作用就是快速查找某个数是否出现过,需要连续,就从间断开始找,一次循环.