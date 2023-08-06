class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int , int> prevSum;
    int len =0;
    int currsum=0;
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        currsum+=nums[i];
        if(currsum==k)
        {
            count++;
        }
        if(prevSum.find(currsum-k)!=prevSum.end())
        {
            count+=prevSum[currsum-k];
        }
        prevSum[currsum]++;
    }
    return count;
    }
};