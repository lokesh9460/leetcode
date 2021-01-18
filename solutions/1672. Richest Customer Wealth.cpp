class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int cols=accounts[0].size();
        int rows=accounts.size();
        vector<int> arr;
        for(int i=0;i<rows;i++)
        {
            int sum=0;
            for(int j=0;j<cols;j++)
                sum+=accounts[i][j];
            arr.push_back(sum);
        }
        return  *max_element(arr.begin(),arr.end());
        
    }
};
