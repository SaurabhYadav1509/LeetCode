/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* Insert(TreeNode* root, int val){
if (root == NULL) return new TreeNode(val);
if (val < root->val) root->left = Insert(root->left,val);
else root->right = Insert(root->right,val);
return root;
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       return Insert(root,val);
    }
};