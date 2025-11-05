class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for (auto x : nums) {  // x 是当前元素
            if (x != 0) {
                nums[i] = x;   // 把非零往前挤
                i++;
            }
        }
        fill(nums.begin() + i, nums.end(), 0);
    }
};