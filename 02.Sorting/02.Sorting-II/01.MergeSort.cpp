class Solution {
public:
void merge(vector<int>& nums,int low,int mid,int high){
            vector<int> res;
            int i=low,j=mid+1;
            while(i<=mid&&j<=high){
                if(nums[i]<=nums[j]){res.push_back(nums[i]);i++;}
                else{res.push_back(nums[j]);j++;}
            }
            while(i<=mid){
                res.push_back(nums[i]);
                i++;
            }
            while(j<=high){
                res.push_back(nums[j]);
                j++;
            }
            for(int k=0;k<res.size();k++){
                nums[low+k]=res[k];
            }
        }
        void divide(vector<int>& nums,int low,int high){
            if(low>=high)return;
            int mid=(low+high)/2;
            divide(nums,low,mid);
            divide(nums,mid+1,high);
            merge(nums,low,mid,high);
        }
    vector<int> mergeSort(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        divide(nums,low,high);
    return nums;
    }
};