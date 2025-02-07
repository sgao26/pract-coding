# https://edabit.com/challenge/st8mDxreMcuWxuz8c
def pentagonal(num):
	iteration = 1
	dots = 1
	lastadd = 0
	while iteration < num:
		lastadd += 5
		iteration += 1
		dots += lastadd
	return dots