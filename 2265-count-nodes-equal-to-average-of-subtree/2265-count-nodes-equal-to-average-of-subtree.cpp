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
int findSum(TreeNode* root, int &count){
    if (root == NULL) return 0;
    
    count++;
    int left = findSum(root->left, count);
    int right = findSum(root->right, count);
    return left + right + root->val;
}
    int averageOfSubtree(TreeNode* root) {
        if (root == NULL) return 0;
        int count=0;
        int result =0;

        int sum = findSum(root,count);
        if (root->val == sum/count) result++;

        result += averageOfSubtree(root->left);
        result += averageOfSubtree(root->right);
    return result;
    }
};