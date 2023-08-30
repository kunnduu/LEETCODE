class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;
        double avg =-10001;
        for(int i =0;i<k;i++)
        {
            sum+=nums[i];
        }
        double ki = (double)k;
        double maxi=sum/ki;
        if(maxi>avg)
        {
            avg=maxi;
        }
        int i =0;
        int j =k;
        while(j<nums.size())
        {
            sum=sum-nums[i]+nums[j];
            double m = sum/ki;
            if(m>avg)
        {
            avg=m;
        }
            i++;
            j++;
            
        }
        return avg;
    }
};