class Solution {
  public:
    void printSmtg(int n) {
        if(n==0)return;
        cout<<"Whatever you want to print "<<endl;
        printSmtg(n-1);
    }
};