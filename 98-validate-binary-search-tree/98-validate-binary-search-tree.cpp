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
    bool isValidBSTHelper (TreeNode* currentNode, TreeNode* min, TreeNode* max) {
        if (currentNode==NULL) return true;               
        if (min && currentNode->val <= min->val) return false;
        if (max && currentNode->val >= max->val) return false;

        return isValidBSTHelper (currentNode->left, min, currentNode) && isValidBSTHelper (currentNode->right, currentNode, max);
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper (root, NULL, NULL);
    }
};