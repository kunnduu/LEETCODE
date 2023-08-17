class Solution {
public:
    bool isPossible(vector<int>& nums,int mid, int threshold)
    {  int sum=0;
       for(int i=0;i<nums.size();i++)
       {    if(nums[i]%mid==0)
            {sum+=nums[i]/mid;
            }
            else
            {
                sum+=nums[i]/mid+1;
            }
    
       }
       if(sum<=threshold)
       {
           return true;
       }
       return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e =*max_element(nums.begin(),nums.end());
        int mid=s+(e-s)/2;
        int ans=INT_MAX;
        while(s<=e)
        {
            if(isPossible(nums,mid,threshold))
            {
                
                  ans=mid;
                
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