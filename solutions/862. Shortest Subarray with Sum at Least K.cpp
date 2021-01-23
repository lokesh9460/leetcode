class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int n=A.size();
        long long p[n];
        p[0]=A[0];
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+A[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(p[i]>=K)
                ans=min(ans,i+1);
        }
        deque<int>q;
        for(int i=0;i<n;i++)
        {
            while(q.empty()==false)
            {
                int last=q.back();
                if(p[i]<=p[last]){
                    q.pop_back();
                }
                else
                    break;
            }
            while(q.empty()==false)
            {
                int firstindex=q.front();
                if(p[firstindex]<=p[i]-K)
                {
                    ans=min(ans,i-firstindex);
                    q.pop_front();
                }
                else
                    break;
            }
            q.push_back(i);
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
        
        
    }
};
