class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n])count++;
        }
        if(count>1)return false;
        return true;
    }
};

//or

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(),x=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                x=i;
                break;
        }}
        int j=x+1;
        for(int i=0;i<n-1;i++){
            if(nums[j]>nums[(j+1)%n])return false;
            j=(j+1)%n;
        }
        return true;
    }
};