class Solution {
public:
    void pattern7(int n){
     for(int i=1;i<=n;i++){
        int j=1;
            for(;j<=n-i;j++)cout<<" ";
            for(;j<=n+i-1;j++)cout<<"*";
            for(;j<=(2*n)-1;j++)cout<<" ";
            cout<<endl;
    }
}
};