class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>n/2)return x.first;
        }
        return -1;
    }
};

//or

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k=0,num,n=nums.size();
        for(int i=0;i<n;i++){
            if(k==0){
                num=nums[i];
                k++;
            }
            else{
                if(nums[i]==num)k++;
                else k--;
            }
        }
        return num;
    }
};