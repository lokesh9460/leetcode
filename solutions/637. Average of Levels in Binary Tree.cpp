/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty())
        {
            queue<TreeNode *>temp;
            long long int sum=0,c=0;
            while(!q.empty())
            {
                TreeNode* n=q.front();
                sum+=n->val;
                c++;
                q.pop();
                
                if(n->left)
                    temp.push(n->left);
                if(n->right)
                    temp.push(n->right);
            }
            q=temp;
            v.push_back((sum*1.0)/c);
        }
        return v;
    }
};
