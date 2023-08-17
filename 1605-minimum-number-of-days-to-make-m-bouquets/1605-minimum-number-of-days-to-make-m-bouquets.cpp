class Solution {
public:
    bool ispossible(vector<int> &day,int &m,int &k,int mid)
    {
        int curr=0;
        int temp=0;
        for(int i=0;i<day.size();i++)
        {
            if(k==temp)
            {
                curr++;
                temp=0;
            }
            if(day[i]<=mid)
            {
                temp++;
            }
            else
            {
                temp=0;
            }
        }
        if(k==temp)
            {
                curr++;
            }
            return curr>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int s =*min_element(bloomDay.begin(),bloomDay.end());
        int e =*max_element(bloomDay.begin(),bloomDay.end());
        int mid=s+(e-s)/2;
        int ans =-1;
        while(s<=e)
        {
            if(ispossible(bloomDay,m,k,mid))
            {   ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            } 
             mid=s+(e-s)/2;
        }
        return ans;
    }
};