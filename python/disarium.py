# https://edabit.com/challenge/yvJbdkmKHvCNtcZy9

def is_disarium(n):
	strNum = str(n)
	sumOfSquares = 0
	index = 1
	for each in strNum:
		sumOfSquares += int(each) ** index
		index += 1
	if sumOfSquares == n:
		return True
	return False