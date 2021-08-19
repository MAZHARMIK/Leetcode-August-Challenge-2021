class Solution {
public:
    long maxP = 0;
    long M = 1e9+7;
    long totalSum = 0;
    int subtreeSum(TreeNode* root) {
        if(!root)
            return 0;
        
        int sub = root->val + subtreeSum(root->left) + subtreeSum(root->right);
        maxP = max(maxP, (totalSum-sub)*sub);
        
        return sub;
    }
    
    int maxProduct(TreeNode* root) {
        if(!root)
            return 0;
        
        totalSum = subtreeSum(root); //caculates  totalSum
        subtreeSum(root); //calculates maxP;
        return maxP%M;
    }
};
