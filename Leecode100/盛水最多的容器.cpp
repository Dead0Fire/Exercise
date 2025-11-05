class Solution {
public:
    int maxArea(vector<int>& height) {
        long long an=0;
        int i=0;
        int j= height.size()-1;
        while(i < j){
            long long h = min(height[i], height[j]);
            an = max(an, h * (j - i));
                if(height[i]>height[j])
                j--;
                else
                i++;

        }
        return an;
    }
};