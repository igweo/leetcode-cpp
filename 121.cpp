class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() < 2)
            return 0;
        int buy = 0, sell = 1, maxProfit = 0;
        while (sell < prices.size())
        {
            if (prices[buy] > prices[sell])
            {
                buy = sell;
            }
            else
            {
                maxProfit = max(maxProfit, prices[sell] - prices[buy]);
            }
            sell++;
        }
        return maxProfit;
    }
};