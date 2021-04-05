class Solution {
bool isSame = true ; 
void isSameFun(TreeNode* p , TreeNode* q){
    
    if(p==NULL && q==NULL) return ;
    else 
    {
        if(p==NULL || q==NULL) {isSame =false ; return ; }
    }
    
    if(p->val!=q->val) isSame = false ;
    
    if(p->left && q->left)  
        isSameFun(p->left,q->left); 
    else {
        if(q->left || p->left) isSame = false ;
    }
    
    if(p->right && q->right) isSameFun(p->right,q->right);
     else {
        if(p->right || q->right) isSame = false ;
    }
}
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       isSameFun(p,q);
       return isSame;
    }
};



// ikkilik  daraxtni tenglikga tekshirish 