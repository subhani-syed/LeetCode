class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX;
        int profit = 0;
        int pft;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<low)
                low = prices[i];
            pft = prices[i]-low;
            if(pft>profit)
                profit = pft;
        }
        return profit;
    }
};