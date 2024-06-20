# edabit: expert
# https://edabit.com/challenge/siuKPSYXjjic9zEF2

import math

def foil(length):
	diameter = 4.0
	circum = diameter*math.pi
	length_left = length
	while True:
		if length_left <= circum and length_left >= circum / 2:
			diameter += 0.005
			break
		elif length_left <= circum / 2 and not length_left == 0:
			diameter += 0.0025
			break
		elif length_left == 0:
			break
		else:
			length_left -= circum
			diameter += 0.005
			circum = diameter*math.pi
	return round(diameter, 4)

#testing
print(foil(0))      # 4.0
print(foil(6))      # 4.0025
print(foil(7))      # 4.005
print(foil(12))     # 4.005
print(foil(13))     # 4.0075
print(foil(1000))   # 4.3825
print(foil(7777))   # 6.385
print(foil(123456)) # 20.2275

# better method:
# from math import pi, sqrt, ceil

# def foil(length):
# 	roll = ceil(sqrt(1600/pi * length + 2556801) - 1599)
# 	return 4 + 0.0025 * roll