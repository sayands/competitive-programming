# 169 - Majority Element

class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maj_index ,count= 0,1
        for i in range(1, len(nums)):
            if nums[maj_index] == nums[i]:
                count+=1
            else:
                count-=1
            if count == 0:
                maj_index = i
                count = 1
        return nums[maj_index]