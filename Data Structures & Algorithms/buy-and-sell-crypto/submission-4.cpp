class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxPrice = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            maxPrice = std::max(maxPrice, prices[i] - minPrice);
            minPrice = std::min(minPrice, prices[i]);
        }
        return maxPrice;
    }
};
