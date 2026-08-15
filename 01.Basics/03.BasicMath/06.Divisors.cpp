class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> d;
        for(int i=1;i<=n/2;i++){
            if(n%i==0)d.push_back(i);
        }
        d.push_back(n);
        return d;
    }
};