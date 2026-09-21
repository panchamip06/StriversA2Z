class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),minprice=prices[0],profit=0;
        for(int i=0;i<n;i++){
            minprice=min(minprice,prices[i]);
            profit=max(profit,prices[i]-minprice);
        }
        return profit;
    }
};