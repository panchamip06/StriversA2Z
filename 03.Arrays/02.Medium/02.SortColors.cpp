class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),i=0,k=0,j=n-1;
        while(k<=j){
            if(nums[k]==2){
                int temp=nums[j];
                nums[j]=nums[k];
                nums[k]=temp;
                j--;k--;
            }
            else if(nums[k]==0){
                int temp=nums[i];
                nums[i]=nums[k];
                nums[k]=temp;
                i++;
            }
            k++;
        }
    }
};