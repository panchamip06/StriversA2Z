class Solution {
  public:
    void printName(int n) {
        if(n==0)return;
        cout<<"Your Name ";
        printName(n-1);
    }
};