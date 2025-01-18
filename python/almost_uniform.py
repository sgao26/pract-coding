#https://edabit.com/challenge/88WesDgd2Ge9JEiJM

def almost_uniform(nums):
	longest = 0
	unique = set(nums)
	for num in unique:
		countMinus = 0
		countPlus = 0
		if num-1 in nums:
			countMinus = nums.count(num) + nums.count(num-1)
		if num+1 in nums:
			countPlus = nums.count(num) + nums.count(num+1)
		longest = max(longest, countPlus, countMinus)
	return longest
