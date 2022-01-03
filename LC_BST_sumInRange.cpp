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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == NULL)//incase the tree doesn't exist 
            return 0; 
        
        //1. cheking the left
        //2. handelling the node
        //3. cheking the right
        
        int sum = 0; 
        if(root->left != NULL)
            sum += rangeSumBST(root->left, low, high);
        
        if(root->val >= low && root->val <= high)
            sum += root->val; 
        
        if(root->right != NULL)
            sum += rangeSumBST(root->right, low, high);
        
        return sum;  
        
    }
};