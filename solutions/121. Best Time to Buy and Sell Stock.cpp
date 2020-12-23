class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=-1,mn=INT_MAX,mxpos=prices.size(),mnpos=prices.size(),ans=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<=mn && i>mxpos)
            {
                mn=prices[i];
                mx=prices[i];
                mnpos=i;
            }
            else if(prices[i]<=mn)
            {
                mn=prices[i];
                mnpos=i;
            }
            if(prices[i]>=mx && i>mnpos)
            {
                mx=prices[i];
                mxpos=i;
            }
            ans=max(ans,mx-mn);
        }
        return ans;
        
        
    }
};
