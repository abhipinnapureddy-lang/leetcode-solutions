class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size());
        for(int i=0;i<prices.size();i++)
        {
            ans[i] = prices[i];
            int j=i+1;
            while(j<prices.size())
            {
                if(prices[i]>=prices[j])
                {
                    ans[i]=prices[i]-prices[j];
                    break;
                }
                else
                {
                    j++;
                }
            }
        }
        return ans;
    }
};