# edabit: very hard
# https://edabit.com/challenge/8BQKa98d3s9Kis4vv

def final(r, c, i):
	result = []
	row = []
	for _ in range(r):
		row = [0] * c
		result.append(row)
	if i == []:
		return result
	for operation in i:
		num = 0
		roworcolumn = ''
		for char in operation:
			if char.isdigit():
				num = int(char)
			else:
				roworcolumn = char
		if roworcolumn == 'r':
			for each in range(len(result[num])):
				result[num][each] += 1
		elif roworcolumn == 'c':
			for each in range(len(result)):
				result[each][num] += 1
	return result

# testing
print(final(2, 2, ['0r', '0r', '0r', '1c'])) # [[3, 4], [0, 1]]

print(final(2, 2, ['0c'])) # [[1, 0], [1, 0]]

print(final(3, 3, ['0c', '1c', '1c', '2c', '2c', '2c'])) # [[1, 2, 3], [1, 2, 3], [1, 2, 3]]

print(final(3, 3, ["2r", "2c", "1r", "0c"])) # [[1, 0, 1], [2, 1, 2], [2, 1, 2]]

print(final(1, 1, [])) # [[0]]

print(final(3, 3, ['0r', '2c', '1r', '2c', '1c', '1r', '1r'])) # [[1, 2, 3], [3, 4, 5], [0, 1, 2]]

print(final(3, 3, [])) # [[0, 0, 0], [0, 0, 0], [0, 0, 0]]

print(final(3, 4, ['1r', '1r', '1r', '3c', '3c', '3c'])) # [[0, 0, 0, 3], [3, 3, 3, 6], [0, 0, 0, 3]]

print(final(10, 1, ['1r', '2r', '3r', '0c'])) # [[1], [2], [2], [2], [1], [1], [1], [1], [1], [1]]

print(final(2, 5, ['1r', '1r', '1r', '1c', '0c', '0c', '1r', '0c', '1r', '0c'])) # [[4, 1, 0, 0, 0], [9, 6, 5, 5, 5]]

# better method
#import numpy as np

#def final(r, c, i):
#    arr = np.zeros((r, c))
#    for idx, d in i:
#        if d == 'r':
#            arr[int(idx)] += 1
#        else:
#            arr[:,int(idx)] += 1
#    return arr.tolist()
		