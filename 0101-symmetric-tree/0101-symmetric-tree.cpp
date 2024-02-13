
class Solution {
public:
    bool issame(TreeNode*q,TreeNode* p){
        if(p==NULL && q==NULL)return true;
         if(p==NULL || q==NULL)return false;
         if(q->val!=p->val)return false;
        return issame(q->left,p->left) && issame(q->right, p->right);
    }
TreeNode* revert(TreeNode*root){
    if(root==NULL && root==NULL)return root;
    TreeNode*temp=root->left;
    root->left=root->right;
    root->right=temp;
    revert(root->left);
    revert(root->right);
    return root;
}
    
    bool isSymmetric(TreeNode* root) {
       if(root==NULL)return true;
        revert(root->left);
        
        bool flag= issame(root->left,root->right);
     //   revert(root->left);
        return flag;
        
    }
};