int Solution::solve(vector<int> &A, int B) {
        int count=0;
        int xr=0;
        int n1=A.size();
    unordered_map<int,int> mp;
    mp[0]=1;
    for(int i=0;i<n1;i++){
        xr=A[i]^xr;
        if(mp.find(xr^B)!=mp.end()){
            count+=mp[xr^B];
        }
        else{
            mp[xr]++;
        }
    }
    return count;
}
