class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int res=INT_MAX;
        set<int> m;
        set<int>:: iterator it;
        int large,small;
        for(int& num:nums)
        {
            if(num % 2)
                m.insert(num*2);
            else
                m.insert(num);
        }
        while(1)
        {
            it=m.begin();
            small=*it;
            it=m.end();
            --it;
            large=*it;
            res=min(res,large-small);
            if(large%2)
                return res;
            else
            {
                m.insert(large/2);
                m.erase(it);
            }
        }
        return res;
        
    }
};
