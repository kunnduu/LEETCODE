class Solution {
public:
    bool solve(string s,string t,int i ,int j)
    {   if(j>t.size())
    {
        return false;
    }
        if(i==s.size() && j<=t.size())
        {
            return true;
        }
        bool ans;
        if(s[i]==t[j])
        {
            ans=solve(s,t,i+1,j+1);
            if(ans)
            {
                return ans;
            }
        }
        else
        {
            ans=solve(s,t,i,j+1);
            if(ans)
            {
                return ans;
            }
        }
        return ans;
    }
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        bool ans = solve(s,t,i,j);
        return ans;
    }
};