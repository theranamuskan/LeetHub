
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini=INT_MAX;
        int max_pro=0;
        for(int i=0;i<prices.size();i++){
mini=min(mini,prices[i]);
            max_pro=max(prices[i]-mini,max_pro);
        }
        return max_pro;
    }
};