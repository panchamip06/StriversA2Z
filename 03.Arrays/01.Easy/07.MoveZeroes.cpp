class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        for(;k<n;k++){
            nums[k]=0;
        }
    }
};