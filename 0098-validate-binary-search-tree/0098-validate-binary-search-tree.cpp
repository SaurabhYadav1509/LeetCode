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
void inorder(TreeNode* root,TreeNode* &temp,bool &flag){
    if (root == NULL) return;
    inorder(root->left,temp,flag);
    if (temp != NULL){
    if (root->val <= temp->val){
        flag = false;
        return;
    }
}   
temp = root;
    inorder(root->right,temp,flag);
}
    bool isValidBST(TreeNode* root) {
        TreeNode* temp=NULL;
        bool flag = true;
        inorder(root,temp,flag);
        return flag;
    }
};