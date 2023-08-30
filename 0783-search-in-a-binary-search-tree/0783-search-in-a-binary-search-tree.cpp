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
    TreeNode* searchBST(TreeNode* root, int val) {
     if(root!=NULL && root->val==val)
     {cout<<root->val<<endl;
         return root;
     }
     else if(root!=NULL && val>root->val)
     {     cout<<root->val<<endl;
           TreeNode* s = searchBST(root->right,val);
           return s;
     } 
     else if(root!=NULL && val<root->val)
     {   cout<<root->val<<endl;
         TreeNode* s=searchBST(root->left,val);
         return s;
     }  
     return NULL;
    }
};