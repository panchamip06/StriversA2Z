class Solution {
public:
int hoare(vector<int>& nums,int low,int high){
    int i=low,j=high,pivot=nums[low];
    while(true){
        while(nums[i]<pivot)i++;
        while(nums[j]>pivot)j--;
        if(i>=j)return j;
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;j--;
    }
}
void quick(vector<int>& nums,int low,int high){
    if(low<high){
        int part=hoare(nums,low,high);
        quick(nums,low,part);
        quick(nums,part+1,high);
    }
}
    vector<int> quickSort(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        quick(nums,low,high);
        return nums;
    }
};