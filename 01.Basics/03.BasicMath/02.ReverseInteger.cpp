class Solution {
public:
    int reverse(int x) {
        int n=0,t;
        while(x!=0){
            t=x%10;
            if(n>INT_MAX/10 || n==INT_MAX/10&&t>7)return 0;
            if(n<INT_MIN/10 || n==INT_MIN/10&&t<-8)return 0;
            n=(n*10)+t;
            x=x/10;
        }
        return n;
    }
};