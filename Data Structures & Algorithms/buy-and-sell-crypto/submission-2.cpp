class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Brute Force
        /*
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
        */


        // Two Pointers
        int l = 0;
        int r = l + 1;
        int result = 0;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                result = std::max(result, profit);
            } else {
                l = r;
            }
            r++;
        }

        return result;
    }
};
