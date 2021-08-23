class Solution {
public:
    unordered_set<int> st;
    int K;
    bool check(TreeNode* root) {
        if(!root)
            return false;
        
        if(st.count(K-root->val))
            return true;
        st.insert(root->val);
        
        return check(root->left) || check(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        st.clear();
        K = k;
        return check(root);
    }
};
