def twoSum(nums: list[int], target: int) -> list[int]:
    for i in range(0, len(nums)):
        for  j in range(0, len(nums)):
            if i == j:
                continue
            else:
                mySum = nums[i] + nums[j]
                if mySum == target:
                    return [i, j]
    return []


print(twoSum([6, 4, 7, 3], 9))