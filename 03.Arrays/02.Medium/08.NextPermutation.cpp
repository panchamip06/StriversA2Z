class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1,j=nums.size()-1;
        while(i>0&&nums[i]<=nums[i-1]){
            i--;
        }i--;
        if(i<0){
            reverse(nums.begin(),nums.end());return;
        }
        while(nums[i]>=nums[j]){
            j--;
        }
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        reverse(nums.begin()+i+1,nums.end());
    }
};