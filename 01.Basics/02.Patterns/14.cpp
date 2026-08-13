class Solution {
public:
    void pattern14(int n) {
        for(int i=65;i<n+65;i++){
            for(char j='A';j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
};