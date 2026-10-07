class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int sum=0,count=0,res=0,n=arr.size();
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum=sum+arr[j];
                if(sum==0){
                  count=max(count,j-i+1);
                }
            }
        }
        return count;
    }
};