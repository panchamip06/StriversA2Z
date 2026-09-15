class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            int j=i;
            while(j>0&&nums[j]<nums[j-1]){
                int temp=nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
                j--;
            }
        }
        return nums;
    }
};