class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> s;

        for(int j=0;j<grid.size();j++)
        {    vector<int> v2;
            for(int i=0;i<grid[0].size();i++)
            {
               v2.push_back(grid[i][j]);
            }
            s[v2]++;
        }
        int count=0;
        for(auto i : grid)
        {
            if (s.find(i) != s.end())
            {
                count+=s[i];
            }
        }
        return count;
    }
};