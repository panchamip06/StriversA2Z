class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> ans;
        for(auto j:mp){
            ans.push_back({j.first,j.second});
        }
        return ans;
    }
};