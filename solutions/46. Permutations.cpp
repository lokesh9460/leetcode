class Solution {
public:
    void swap(vector<int>& nums,int i,int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    void permute(vector<int>& nums,vector<vector<int>>& ans,int index)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums,index,i);
            permute(nums,ans,index+1);
            swap(nums,index,i);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums,ans,0);
        return ans;
        
    }
};
