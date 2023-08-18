class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        unordered_map<int,vector<int>> adjlist;
        for(int i=0;i<roads.size();i++)
        {   int first = roads[i][0];
            int second = roads[i][1];
            adjlist[first].push_back(second);
            adjlist[second].push_back(first);
        }
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            int v=adjlist[i].size();
            int v1=adjlist[j].size();
            int m;
            if((find(adjlist[i].begin(),adjlist[i].end(),j)!=adjlist[i].end()) && (find(adjlist[j].begin(),adjlist[j].end(),i)!=adjlist[j].end()))
            { 
            m = v+v1-1;
            }
            else
            {
            m=v+v1;
            }
            maxi=max(maxi,m);
            }
        }
        return maxi;
    }
};