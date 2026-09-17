class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,n=nums.size(),k=1;
        if(n==0)return 0;
        while(j<n){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;j++,k++;
            }
            else j++;
        }
        return k;
    }
};