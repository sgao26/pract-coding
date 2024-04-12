# edabit: very hard
# https://edabit.com/challenge/XjgoXNmnz59txiQp3

def split(number):
	threes = int(number / 3)
	remain = number % 3
	if remain == 1 and threes > 0:
		threes-=1
		remain+=3
	elif remain == 0:
		remain = 1
	
	return pow(3,threes) * remain

# testing 
print(split(25)) # 8748)
print(split(1)) # 1)
print(split(10)) # 36)
print(split(5)) # 6)
print(split(15)) # 243)
print(split(20)) # 1458)