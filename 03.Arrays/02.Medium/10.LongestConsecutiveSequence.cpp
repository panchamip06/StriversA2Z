class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int count,curr,res=0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                count=1;curr=x;
                while(st.find(curr+1)!=st.end()){
                    count++;curr++;
                }
                res=max(res,count);
            }
        }
        return res;
    }
};