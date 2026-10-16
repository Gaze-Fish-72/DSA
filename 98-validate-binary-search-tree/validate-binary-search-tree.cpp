class Solution {
public:
    bool func(TreeNode* root,TreeNode* min,TreeNode* max){
        if(root==NULL) return true;
        if((min!=NULL) && root->val<=min->val) return false;
        if((max!=NULL) && root->val>=max->val) return false;
        return func(root->left,min,root) && func(root->right,root,max);
    }
    bool isValidBST(TreeNode* root) {
        return func(root,NULL,NULL);
    }
};