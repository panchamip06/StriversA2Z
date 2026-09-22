class Solution {  
public:  
    vector<int> LeaderInArray(vector<int>& nums) { 
int n=nums.size(),max=nums[n-1]; 
vector<int> res;  
for(int i=n-1;i>=0;i--){  
if(nums[i]>=max){max=nums[i];res.push_back(max);}  
} 
reverse(res.begin(),res.end()); 
return res; 
};