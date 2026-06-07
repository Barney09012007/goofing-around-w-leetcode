class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map1={}
        for i,n in enumerate(nums): #enumerate produces index, value for each element
           diff=target-n
           if diff in map1:
            return [map1[diff],i]
           else:
            map1[n]=i
        

        