class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        multiset<int> data;
        for(int i=0;i<nums.size();i++)
        {
            if(data.size()>=k+1)
                data.erase(data.find(nums[i-k-1]));
            multiset<int>::iterator it=data.insert(nums[i]);
            if(it!=data.begin())
            {
                --it;
                if((long long)nums[i]-*it<=t)
                    return true;
                ++it;
            }
            ++it;
            if(it!=data.end())
            {
                if((long long)*it-nums[i]<=t)
                    return true;
            }
                
        }
        return false;
        
    }
};
