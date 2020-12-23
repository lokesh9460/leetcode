class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> m;
        unordered_map<int,int>p;
        int r=mat.size(),c=mat[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                m[i-j].push_back(mat[i][j]);
        }
        for(auto &x: m)
            sort(x.second.begin(),x.second.end());
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                mat[i][j]=m[i-j][p[i-j]++];
        }
        return mat;
        
        
        
    }
};
