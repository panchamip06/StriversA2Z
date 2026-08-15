class Solution {
public:
    bool Armstrong(int n) {
        int count=0,x=0,org=n,t;
        while(n>0) {
            count++;
            n/=10;
        }
        n=org;
        while(n>0) {
            t=n%10;
            x=x+pow(t,count);
            n/=10;
        }
        return (x==org);
    }
};