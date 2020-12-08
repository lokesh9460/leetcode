class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0,z=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                z+=1;
            else
            {
                nums[s]==nums[i];
                s+=1;
            }
        }
        for(int i=nums.size()-z;i<nums.size();i++)
            nums[i]=0;
        
    }
};
