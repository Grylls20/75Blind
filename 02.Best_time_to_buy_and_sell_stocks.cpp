class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=prices[0], ans=0;
        for (int i=0; i<prices.size(); i++) {
            if (b>prices[i]) {
                b=prices[i];
            } else if (prices[i]-b>ans) {
                ans=prices[i]-b;
            }
        }
        return ans;
    }
};