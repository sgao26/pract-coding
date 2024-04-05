# edabit: very hard
# https://edabit.com/challenge/YqLBEZJR9ySndYQpH


def staircase(n):
	result = ""
	for x in range(abs(n)):
		line = ""
		if n > 0:	
			line += "_" * (abs(n)-x-1)
			line += "#" * (x+1)
		else:
			line += "_" * (x)
			line += "#" * (abs(n)-x)
		result += line
		if x < abs(n)-1:
			result += "\n"
	return result

# testing
num_vector = [3, 7, 2, -8, 4, -12, 11, -6]
res_vector = [
  "__#\n_##\n###",
  "______#\n_____##\n____###\n___####\n__#####\n_######\n#######",
  "_#\n##",
  "########\n_#######\n__######\n___#####\n____####\n_____###\n______##\n_______#",
  "___#\n__##\n_###\n####",
  "############\n_###########\n__##########\n___#########\n____########\n_____#######\n______######\n_______#####\n________####\n_________###\n__________##\n___________#",
  "__________#\n_________##\n________###\n_______####\n______#####\n_____######\n____#######\n___########\n__#########\n_##########\n###########",
  "######\n_#####\n__####\n___###\n____##\n_____#"
]

for i, x in enumerate(num_vector):
    assert staircase(x) == res_vector[i]

print("All tests passed successfully.")

# better method:
def better_staircase(n):
	return '\n'.join(['_'*(abs(n)-1-i)+'#'*(i+1) for i in range(abs(n))][::n//abs(n)])