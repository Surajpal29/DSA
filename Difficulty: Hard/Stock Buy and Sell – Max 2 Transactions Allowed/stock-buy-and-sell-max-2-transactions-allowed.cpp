class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int first_buy=INT_MIN;
        int first_sell=0;
        int second_buy=INT_MIN;
        int second_sell=0;
        
        for(int p:prices){
            first_buy=max(first_buy,-p);
            first_sell=max(first_sell,first_buy+p);
            second_buy=max(second_buy,first_sell-p);
            second_sell=max(second_sell,second_buy+p);
        }
        return second_sell;
    }
};