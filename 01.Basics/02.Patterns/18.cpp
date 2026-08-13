class Solution {
public:
    void pattern18(int n) {
        for(int i=n+64;i>=65;i--){
            for(char j=i;j<n+65;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};