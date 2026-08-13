class Solution {
public:
    void pattern17(int n) {
        for(int i=1;i<=n;i++){
            char k='A';
            for(int j=1;j<=n-i;j++)cout<<" ";
            for(int j=1;j<=i;j++)cout<<k++;
            k=k-2;
            for(int j=1;j<i;j++)cout<<k--;
            cout<<endl;
        }
    }
};