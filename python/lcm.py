# edabit: expert
# https://edabit.com/challenge/i7TaDyRQQZCY3g2JG

from math import gcd

def lcm_two_nums (a, b):
	return abs(a * b) // gcd(a, b)
def lcm (nums):
	result = 1
	for num in nums:
		result = lcm_two_nums(result, num)
	return result

#testing

assert lcm([1]) == 1
assert lcm([5, 5, 5]) == 5
assert lcm([67, 34, 12, 3, 2]) == 13668
assert lcm([79, 18, 7, 3, 1]) == 9954
assert lcm([10, 20, 30, 40, 50]) == 600
assert lcm([2, 3, 5, 7, 11, 13, 17]) == 510510
assert lcm([91, 92, 93, 94, 95]) == 3476431140

print("All tests passed!")