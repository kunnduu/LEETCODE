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
    void inorder(TreeNode* root,map<int,int> &m)
    {
        if(root==NULL)
        {
            return;
        }

        inorder(root->left,m);
        m[root->val]++;
        inorder(root->right,m);
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> m;
        inorder(root,m);
        int data;
        int maxi=INT_MIN;
        for(auto i : m)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
               
            }
        }
        vector<int> v;
        for(auto i : m)
        {
            if(maxi==i.second)
            {
                v.push_back(i.first);
            }
        }
        return v;
        

    }
};