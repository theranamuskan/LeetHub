
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini = INT_MAX;
        int max_pro = 0;
        int n=prices.size();
        for (int i = 0; i < n;i++)
        {
            mini = min(prices[i], mini);
            max_pro = max(prices[i] - mini, max_pro);
        }
        return max_pro;
    }
};