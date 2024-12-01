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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        //start in the middle 
        //heapify the left and the right half of the array
        //if the current is null then return null
        return func(0, nums.size()-1,nums);
    }
    TreeNode* func(int left, int right, vector<int>& nums) {
        if(left > right) return nullptr; 
        int mid  = left + (right-left)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = func(left,mid-1,nums);
        root->right = func(mid+1,right,nums);
        return root;


    }



};
