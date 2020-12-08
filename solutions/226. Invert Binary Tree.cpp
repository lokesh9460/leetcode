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
    
    void visit(TreeNode* rot)
    {
        if(!rot)
            return;
        else
        {
            visit(rot->left);
            visit(rot->right);
            swap(rot->left,rot->right);
        }
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;
        visit(root);
        return root;
        
    }
};
