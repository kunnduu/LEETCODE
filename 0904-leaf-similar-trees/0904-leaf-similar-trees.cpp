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
    bool isleaf(TreeNode* root)
    {
        if(root==NULL)
        {
            return false;
        }
        else if(root->right==NULL && root->left==NULL)
        {
            return true;
        }
        return false;
    }
    void inorder(TreeNode* root)
    {   if(root==NULL)
    {
        return;
    }
        inorder(root->left);
        if(isleaf(root)) v.push_back(root->val);
        inorder(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        if(v.size()%2!=0)
        {
            return false;
        }
        int i = 0;
        int j = v.size()/2;
        while(j<v.size())
        {
            if(v[i]!=v[j])
            {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};