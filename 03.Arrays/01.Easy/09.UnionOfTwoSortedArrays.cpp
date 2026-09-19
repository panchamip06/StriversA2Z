class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,m=nums1.size(),n=nums2.size();
        vector<int> res;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                if(res.empty()||res.back()!=nums1[i]){
                res.push_back(nums1[i]);
                }i++;
            }
            else if(nums1[i]>nums2[j]){
                if(res.empty()||res.back()!=nums2[j]){
                res.push_back(nums2[j]);
                }j++;
            }
        } 
        while(i<m){
            if(res.empty()||res.back()!=nums1[i]){
            res.push_back(nums1[i]);
            }i++;
        }    
        while(j<n){
            if(res.empty()||res.back()!=nums2[j]){
            res.push_back(nums2[j]);
            }j++;
        }
        return res;
    }
};