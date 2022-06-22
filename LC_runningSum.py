"""
Outcomes: 
- Decaring a list with a specific size
- For Loop starting from 1
- return a list
"""
def runningSum(self, nums: List[int]) -> List[int]:
    new_list = [None] * len(nums)
    new_list[0] = nums[0]
    i = 1
    for i in range(1,len(nums)):
        new_list[i] = new_list[i-1] + nums[i]
    return new_list

"""
Other ways to declar: final_lst=[nums[0]]
-----------------------------------------

def runningSum(self, nums: List[int]) -> List[int]:
        return list(accumulate(nums))
"""
