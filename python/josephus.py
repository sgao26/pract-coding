# https://edabit.com/challenge/4AjWvJdZpFEMbGALd

def who_goes_free(n, k):
	prisoners = list(range(n))
	previous_pos = 0
	while len(prisoners) > 1:
		previous_pos += (k-1)
		previous_pos %= len(prisoners)
		prisoners.pop(previous_pos)
	return prisoners[0]