class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),countsum=nums[0],maxsum=nums[0];
        for(int i=1;i<n;i++){
            countsum=max(nums[i],countsum+nums[i]);
            maxsum=max(maxsum,countsum);
        }
        return maxsum;
    }
};