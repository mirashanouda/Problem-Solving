def pivotIndex(nums: List[int]) -> int:
    newlist = list(accumulate(nums))
    #new list: 2, 3, 2
    #
    n = len(nums)
    for i in range(n):
        """
        the left sum == right sum
        accomulate == total sum - left sum - the current element 
        """
        leftSum = newlist[i]
        rightSum = newlist[n - 1] - newlist[i] - nums[i]*2
        print('index: ', i, '- val: ', nums[i], '- left: ', leftSum, '- right: ', rightSum)
        if leftSum == rightSum:
            return i + 1
    return -1


print([1,7,3,6,5,6])