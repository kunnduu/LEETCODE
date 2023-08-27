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
vector<int> v;
int count=0;
    void preorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return ;
        }
        v.push_back(root->val);
        int maxi= *max_element(v.begin(),v.end());
        if(maxi<=root->val)
        {
            count++;
        }
        preorder(root->left);
        preorder(root->right);
        v.pop_back();
    }
    int goodNodes(TreeNode* root) {
     preorder(root);
     return count;   
    }
};