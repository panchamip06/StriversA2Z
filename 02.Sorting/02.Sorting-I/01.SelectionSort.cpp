class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=i;j<n;j++){
                if(nums[j]<nums[min])min=j;
            }
            int temp=nums[i];
            nums[i]=nums[min];
            nums[min]=temp;
        }
        return nums;
    }
};