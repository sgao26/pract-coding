# edabit: very hard
# https://edabit.com/challenge/6vSZmN66xhMRDX8YT

def advanced_sort(lst):
	result = []
	
	for item in lst:
		sublist = []
		itemFound = False
		for each in result:
			if item in each:
				itemFound = True
		if not itemFound:
			sublist.append(item)
			result.append(sublist)
		else:
			for each in result:
				if item in each:
					each.append(item)
					
	return result

# testing
print(advanced_sort([1,2,1,2])) # [[1,1],[2,2]]
print(advanced_sort([2,1,2,1])) # [[2,2],[1,1]]
print(advanced_sort([3,2,1,3,2,1])) # [[3,3],[2,2],[1,1]]
print(advanced_sort([5,5,4,3,4,4])) # [[5,5],[4,4,4],[3]]
print(advanced_sort([80,80,4,60,60,3])) # [[80,80],[4],[60,60],[3]]
print(advanced_sort(['c','c','b','c','b',1,1])) # [['c','c','c'],['b','b'],[1,1]]
print(advanced_sort([1234, 1235, 1234, 1235, 1236, 1235])) # [[1234, 1234],[1235, 1235, 1235],[1236]]
print(advanced_sort(['1234', '1235', '1234', '1235', '1236', '1235'])) # [['1234', '1234'],['1235', '1235', '1235'],['1236']]