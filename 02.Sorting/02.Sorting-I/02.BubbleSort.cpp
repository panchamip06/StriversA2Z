class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            int swapped=0;
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    swapped=1;
                }
            }
            if(swapped==0) break;
        }
        return nums;
    }
};