class Solution {
public:
    void pattern6(int n) {
        for(int i=n;i>0;i--){
            int k=1;
            for(int j=i;j>0;j--){
                cout<<k;
                k++;
            }
            cout<<endl;
        }
    }
};