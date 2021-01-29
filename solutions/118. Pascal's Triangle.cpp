class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> t;
        vector<int> row;
        int n;
        for(int i=0;i<numRows;i++)
        {
            row.clear();
            for(int j=0;j<=i;j++)
            {
                if(i==j)
                    row.push_back(1);
                else if(j==0)
                    row.push_back(1);
                else
                {
                    n=t[i-1][j-1]+t[i-1][j];
                    row.push_back(n);
                }
            }
            t.push_back(row);
        }
        return t;
        
        
    }
};
