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
TreeNode* Search(TreeNode* root, int target){
    if (root == NULL) return NULL;
    if (root->val > target) return Search(root->left,target);
    else if (root->val < target) return Search(root->right,target);
    else return root;
}
    TreeNode* searchBST(TreeNode* root, int val) {
      return Search(root,val);
    }
};