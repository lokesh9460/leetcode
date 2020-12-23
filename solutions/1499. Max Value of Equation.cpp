class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        deque<vector<int>> dq;
        dq.push_back({points[0][0],points[0][1]-points[0][0]});
        int n=points.size();
        int maxval=INT_MIN;
        for(int j=1;j<n;j++)
        {
            while(!dq.empty() && points[j][0]-dq.front()[0]>k)
                dq.pop_front();
            if(!dq.empty())
            {
                int val =dq.front()[1]+points[j][1]+points[j][0];
                maxval=max(maxval,val);
            }
            int v=points[j][1]-points[j][0];
            while(!dq.empty() && dq.back()[1]<=v)
                dq.pop_back();
            dq.push_back({points[j][0],v});
        }
        return maxval;
    }
};
