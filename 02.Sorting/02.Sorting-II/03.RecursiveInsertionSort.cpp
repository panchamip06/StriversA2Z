class Solution {
public:
void recur1(vector<int>&nums,int n){
    if(n<=1)return;
    recur1(nums,n-1);
    recur2(nums,n-1);
}
void recur2(vector<int>&nums,int j){
    if(j==0)return;
    if(nums[j]<nums[j-1]){
        int temp=nums[j];
        nums[j]=nums[j-1];
        nums[j-1]=temp;
    }
    recur2(nums,j-1);
}
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        recur1(nums,n);
        return nums;
    }
};
