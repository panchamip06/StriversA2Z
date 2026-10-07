class Solution {   
public:   
    vector<int> maxSubArray(vector<int>& nums) {  
int n=nums.size(),countsum=nums[0],maxsum=nums[0];
vector<int> res={nums[0]},answer={nums[0]};  
for(int i=1;i<n;i++){   
if(countsum+nums[i]<nums[i]){countsum=nums[i];res.clear();res.push_back(nums[i]);}  
else{countsum=countsum+nums[i];res.push_back(nums[i]);}   
if(maxsum<countsum){maxsum=countsum;answer.clear();answer=res;} 
}   
return answer;