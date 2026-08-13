class Solution {
public:
    void pattern11(int n) {
        int k;
        for(int i=1;i<=n;i++){
            if(i%2==0)k=0;
            else k=1;
            for(int j=1;j<=i;j++){
                cout<<k<<" ";
                k=1-k;
            }
            cout<<endl;
        }
    }
};