#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int leftindex=-1;
        int rightindex=-1;
        int middle;
        while(left<=right){
            middle=left+(right-left)/2;
            if(nums[middle]<target){
                left=middle+1;
            }
            else{
                right=middle-1;
            }
        }
        //if(nums[left]==target&&left<nums.size())这样写是错的因为可能访问越界/.
        if(left<nums.size()&&nums[left]==target)
            {leftindex=left;}
        else 
            {return {-1,-1};}

        right=nums.size()-1;
        while(left<=right){
            middle=left+(right-left)/2;
            if(nums[middle]<=target){
                left=middle+1;
            }
            else{
                right=middle-1;
            }
        }
        rightindex=right;
    return {leftindex,rightindex};
    }
};