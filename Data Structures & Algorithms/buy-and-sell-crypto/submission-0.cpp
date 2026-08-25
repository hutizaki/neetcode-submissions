class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //sliding window, grow right side if number is larger
        int max_profit = 0;
        int left = 0;
        int right = 1;
        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                max_profit = max(max_profit, profit);
            } else {
                left = right;
            }
            right++;
        }
        return max_profit;
    }
};
