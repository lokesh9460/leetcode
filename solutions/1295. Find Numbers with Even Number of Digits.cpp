class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=0;
            while(nums[i]>0)
            {
                x++;
                nums[i]=nums[i]/10;
            }
            ans+=(x%2==0);
        }
        return ans;
        
    }
};
