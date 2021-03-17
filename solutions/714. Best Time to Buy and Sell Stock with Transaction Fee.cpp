class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int sell_stock=0,keep_stock=-prices[0];
        for(int i=1;i<prices.size();i++)
        {
            sell_stock=max(sell_stock,keep_stock+prices[i]-fee);
            keep_stock=max(keep_stock,sell_stock-prices[i]);
        }
        return sell_stock;
            
        
    }
};
