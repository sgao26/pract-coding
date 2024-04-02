# edabit: very hard
# https://edabit.com/challenge/QN4RMpAnktNvMCWwg

def id_mtrx(n):
	if not isinstance(n, int):
		return "Error"
	matrix = []
	loops = abs(n)
	for x in range(loops):
		row = []
		for _ in range(loops):
			row.append(0)
		if (n < 0):
			row[loops-1-x] = 1
		else:
			row[x] = 1
		matrix.append(row)
	return matrix


# testing

print(id_mtrx(1)) # [[1]]
print(id_mtrx(2)) # [[1, 0], [0, 1]]
print(id_mtrx(3)) # [[1, 0, 0], [0, 1, 0], [0, 0, 1]]
print(id_mtrx(4)) # [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]]
print(id_mtrx(-6)) # [[0, 0, 0, 0, 0, 1], [0, 0, 0, 0, 1, 0], [0, 0, 0, 1, 0, 0], [0, 0, 1, 0, 0, 0], [0, 1, 0, 0, 0, 0], [1, 0, 0, 0, 0, 0]]
print(id_mtrx("edabit")) # "Error" ----- 'Incompatible types passed as n should return the string "Error".'
