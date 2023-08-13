class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<int> s;
        s.push(0);
        for(int i=temperatures.size()-1;i>=0;i--)
        {
            int curr=temperatures[i];
            while(s.top()!=0 && curr>=temperatures[s.top()])
            {
                s.pop();
            }
            if(s.top()!=0)
            {
            ans[i]=s.top()-i;
            }
            s.push(i);
        }
        return ans;
    }
};