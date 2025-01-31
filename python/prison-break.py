# https://edabit.com/challenge/SHdu4GwBQehhDm4xT

def freed_prisoners(prison):
	if prison[0] == 0:
		return 0
	index = 0
	iteration = 0
	freed = 0
	while index in range(len(prison)):
		temp = prison[index] + iteration
		while temp != 1:
			index += 1
			if index >= len(prison):
				return freed
			temp = prison[index] + iteration
		freed += 1
		iteration += 1
		iteration %= 2
		index += 1
	return freed