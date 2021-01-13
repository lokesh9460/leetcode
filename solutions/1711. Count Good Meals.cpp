class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int n=deliciousness.size();
        if(n==1)
        {
            return 0;
        }
        unordered_map<int,int> c;
        int ans=0;
        int mod=1000000007;
        sort(deliciousness.begin(),deliciousness.end());
        c[deliciousness[0]]++;
        for(int i=1;i<n;i++)
        {
            for(int p=0;p<21;p++)
            {
                if((int)pow(2,p)>2*deliciousness[i])
                    break;
                int target=(int)pow(2,p)-deliciousness[i];
                if(c.find(target)!=c.end())
                {
                    ans+=c[target]%mod;
                    ans%=mod;
                }
            }
            c[deliciousness[i]]++;
        }
        return ans;
        
    }
};
