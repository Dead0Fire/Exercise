#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); // 排序
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break;
            if(i>0&&nums[i]==nums[i-1]) continue;
            int j=i+1;int k=nums.size()-1;
            while(j<k){
            if(nums[j]+nums[k]+nums[i]==0) {
                res.push_back({nums[i], nums[j], nums[k]});
                j++;k--;
                while(j<k&&nums[j]==nums[j-1]) {j++;}
                while(j<k&&k<nums.size()-1&&nums[k]==nums[k+1]) {k--;}
                }
            if(j<k&&nums[j]+nums[k]+nums[i]<0) {j++;}
            if(j<k&&nums[j]+nums[k]+nums[i]>0) {k--;}
            }
        }
        return res;
    }
};
