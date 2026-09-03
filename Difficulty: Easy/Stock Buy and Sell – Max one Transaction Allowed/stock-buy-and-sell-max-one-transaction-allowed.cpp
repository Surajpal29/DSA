class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int max_profit=0;
        int less_price=prices[0];
        
        for(int i=1;i<prices.size();i++){
            less_price=min(less_price,prices[i]);
            if(prices[i]>less_price){
                max_profit=max(max_profit,prices[i]-less_price);
            }
        }
        return max_profit;
    }
};
