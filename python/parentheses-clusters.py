# edabit: very hard
# https://edabit.com/challenge/Fpymv2HieqEd7ptAq

def split(txt):
	clusters = []
	balancer = 0
	cluster = ""
	for char in txt:
		if char == '(':
			balancer += 1
		else:
			balancer -= 1
		cluster += char
		if balancer == 0:
			clusters.append(cluster)
			cluster = ""
	return clusters
		

# testing
print(split("()()()")) # ["()", "()", "()"]
print(split("")) # []
print(split("()()(())")) # ["()", "()", "(())"]
print(split("(())(())")) # ["(())", "(())"]
print(split("((()))")) # ["((()))"]
print(split("()(((((((((())))))))))")) # ["()", "(((((((((())))))))))"]
print(split("((())()(()))(()(())())(()())")) # ["((())()(()))", "(()(())())", "(()())"]
print(split("((()))(())()()(()())")) # ["((()))", "(())", "()", "()", "(()())"]
print(split("((())())(()(()()))")) # ["((())())", "(()(()()))"]
print(split("(()(()()))()(((()))()(()))(()((()))(())())")) # ["(()(()()))", "()", "(((()))()(()))", "(()((()))(())())"]