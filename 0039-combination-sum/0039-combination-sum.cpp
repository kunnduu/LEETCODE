class Solution {
public:
    void solve(vector<int>& candidates,vector<vector<int>> &ans,vector<int> v,int target,int j)
    {
        if(j>=candidates.size())
        {
            return;
        }
        if(target<0)
        {
            return;
        }
        else if(target==0)
        {
            ans.push_back(v);
        }
        for(int i=j;i<candidates.size();i++)
        {
            v.push_back(candidates[i]);
            solve(candidates,ans,v,target-candidates[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        int j=0;
        solve(candidates,ans,v,target,j);
        return ans;

    }
};