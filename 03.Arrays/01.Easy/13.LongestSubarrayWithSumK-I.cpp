class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
       int res=0,n=nums.size();
       for(int i=0;i<n;i++){
        int q=0,sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];q++;
            if(sum==k){
                res=max(res,q);
            }
        }
       }
       return res;
    }
};
