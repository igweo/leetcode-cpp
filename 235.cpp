/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        while ((long long)(root->val - p->val) * (long long)(root->val - q->val) > 0)
        {
            root = p->val < root->val ? root->left : root->right;
        }
        return root;
    }
}