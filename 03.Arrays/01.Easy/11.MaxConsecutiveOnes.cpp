class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0,q=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                q=0;
            }
            else{
                k=max(k,++q);
            }
        }   
        return k;   
    }
};