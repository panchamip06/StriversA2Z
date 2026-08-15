class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int n=0,t,org=x;
        while(x!=0){
            t=x%10;
            if(n>INT_MAX/10 || n==INT_MAX/10 && t>7)return false;
            n=(n*10)+t;
            x=x/10;
        }
        if(n==org)return true;
        else return false;
    }
};