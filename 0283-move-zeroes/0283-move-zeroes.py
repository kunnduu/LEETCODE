class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        if(len(nums)==1):
            return nums
        else:
            j=0
            for i in nums:
                if(i!=0):
                    nums[j]=i
                    j+=1
            for k in range(j,len(nums)):
                nums[k]=0
            return nums    
                    
                
        