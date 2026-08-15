class Solution {
public:
    int GCD(int n1,int n2) {
        while(n2!=0){
            temp=n1%n2;
            n1=n2;
            n2=temp;
        }
        return n1;
    }
};