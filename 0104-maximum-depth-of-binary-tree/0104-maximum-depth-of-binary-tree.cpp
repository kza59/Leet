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
bool isLeaf(TreeNode* root) {
    if(root->left == nullptr && root->right == nullptr) return true;
    return false;
}
int height(TreeNode* root) {

    if(root == nullptr) return 0;
    if(isLeaf(root)) return 1;
       int l = height(root->left);
    int r = height(root->right);
    if (l > r) {
        return l + 1;
    }
    else return r + 1;
}
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};