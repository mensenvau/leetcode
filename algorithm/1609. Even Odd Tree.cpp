class Solution {
vector<int> a[100005];
bool isRes = true ;
    
void oddRootRead(TreeNode* root,int k){
    if(root==NULL) return ;
    if(k%2==0){
       if(root->val%2!=1){ isRes = false ; }
       else{
           if(a[k].size()>0 && a[k][a[k].size()-1]<=root->val) { isRes=false ;  }
           a[k].push_back(root->val) ;
       }
    }
    else 
    {
        if(root->val%2!=0) { isRes = false ;  }
       else{
           if(a[k].size()>0 && a[k][a[k].size()-1]>=root->val) { isRes=false ;   }
           a[k].push_back(root->val) ;
       } 
    }
       
        if(root->right) oddRootRead(root->right,k+1);
        if(root->left)  oddRootRead(root->left,k+1);
       
}
public:
    bool isEvenOddTree(TreeNode* root) {
        oddRootRead(root,0);
        return isRes ; 
    }
};



// Runtime: 336 ms, faster than 12.24% of C++ online submissions for Even Odd Tree.
// Memory Usage: 156 MB, less than 32.73% of C++ online submissions for Even Odd Tree.