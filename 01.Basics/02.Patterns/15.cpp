class Solution {
public:
    void pattern15(int n) {
        for(int i=n+64;i>=65;i--){
            for(char j='A';j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
};