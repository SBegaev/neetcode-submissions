class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int r = 0;

        for (int l = 0; l < prices.size() - 1; ++l) {
            
            r = l + 1;
            while (r < prices.size()) {
                auto profit = prices[r] - prices[l];
                r++;
                result = std::max(result, profit);
            }    
        }

        return result;
    }
};
