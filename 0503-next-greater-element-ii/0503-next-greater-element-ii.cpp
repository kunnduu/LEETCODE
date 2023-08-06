class Solution {
public:
     
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> ans(n,0);
        st.push(-1000000001);
        for(int i=(nums.size()*2)-1;i>0;i--)
        {
            int curr=nums[i%n];
            while(st.top()!=-1000000001 && curr>=st.top())
            {
                st.pop();
            }
            if(st.top()==-1000000001)
            {
                ans[i%n]=-1;
            }
            else
            {
              ans[i%n]=st.top();
            }
            st.push(curr);
        }
        
        return ans;

    }
};