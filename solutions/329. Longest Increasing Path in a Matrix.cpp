class Solution {
    int n,m;
public:
    int DFS(int i,int j,int parent,vector<vector<int>>& matrix,vector<vector<int>> &dp)
    {
        if(i>=n || i<0 ||j>=m || j<0 || (parent!=-1 && matrix[i][j]<=parent))
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int down=1+DFS(i+1,j,matrix[i][j],matrix,dp);
        int right=1+DFS(i,j+1,matrix[i][j],matrix,dp);
        int up=1+DFS(i-1,j,matrix[i][j],matrix,dp);
        int left=1+DFS(i,j-1,matrix[i][j],matrix,dp);
        dp[i][j]=max(dp[i][j],max(left,max(right,max(up,down))));
        return max(left,max(right,max(up,down)));
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size();
        if(n==0)
            return 0;
        m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        int max_length=1;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            max_length=max(max_length,DFS(i,j,-1,matrix,dp));
        return max_length;
        
    }
};
