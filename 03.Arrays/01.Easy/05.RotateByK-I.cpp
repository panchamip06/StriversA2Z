class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       if(n==0)return;
       vector<int> res;
       k=k%n;
       for(int i=0;i<n;i++){
        res.push_back(nums[(n-k+i)%n]);
       }
       for(int i=0;i<n;i++){
        nums[i]=res[i];
       }
    }
};