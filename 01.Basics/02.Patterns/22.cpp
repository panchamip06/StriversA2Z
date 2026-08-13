class Solution {
public:
    void pattern22(int n) {
        for(int i=n;i>0;i--){
            int j;
            for(j=n;j>=i;j--)cout<<j<<" ";
            j++;
            for(int k=1;k<=(2*i)-2;k++)cout<<j<<" ";
            j++;
            for(;j<=n;j++)cout<<j<<" ";
            cout<<endl;
        }
        for(int i=2;i<=n;i++){
            int j;
            for(j=n;j>=i;j--)cout<<j<<" ";
            j++;
            for(int k=1;k<=(2*i)-2;k++)cout<<j<<" ";
            j++;
            for(;j<=n;j++)cout<<j<<" ";
            cout<<endl;
        }
    }
};