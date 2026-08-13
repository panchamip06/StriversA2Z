class Solution {
public:
    void pattern16(int n) {
        for(char i='A';i<n+65;i++){
            for(int j=65;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
};