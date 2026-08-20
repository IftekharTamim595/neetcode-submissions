class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int price = 1e9;
        for(int i:prices){
            price = min(price,i);
            profit = max(profit,i-price);
        }
        return profit;
    }
};
