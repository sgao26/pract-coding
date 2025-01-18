# https://edabit.com/challenge/4AjWvJdZpFEMbGALd

def who_goes_free(n, k):
	prisoners = list(range(n))
	previous_pos = 0
	while len(prisoners) > 1:
		previous_pos += (k-1)
		previous_pos %= len(prisoners)
		prisoners.pop(previous_pos)
	return prisoners[0]

#simplified josephus:
#https://edabit.com/challenge/L9Zh7dWsENnE9P6qc

#formula:
#j(n)=(j(n-1)+2)%n
#example: if j(7) is 7, j(8) is j(7)+2 mod 8 which is 7+2 mod 8, or 1

def josephus(people):
    survivor = 0
    for i in range(2, people + 1):
        survivor = (survivor + 2) % i
    return survivor + 1