class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
            int l=nums[0];
            int sl=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>l){
                sl=l;
                l=nums[i];
            }
            else if(nums[i]>sl&&nums[i]<l){
                sl=nums[i];
            }
        }
        return sl;
    }
};