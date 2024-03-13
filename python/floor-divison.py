#edabit: medium
#

def shift_to_right(x, y):
	return (x//pow(2, y))

#testing
print(shift_to_right(80, 3)) # 10

print(shift_to_right(-24, 2)) # -6

print(shift_to_right(-5, 1)) # -3

print(shift_to_right(4666, 6)) # 72

print(shift_to_right(3777, 6)) # 59

print(shift_to_right(-512, 10)) # -1