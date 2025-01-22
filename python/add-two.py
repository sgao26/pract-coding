# https://edabit.com/challenge/oFqkxLiqeSGL8xmBn

def add_two_numbers(l1, l2):
	list1 = l1.get_data()
	list1.reverse()
	list2 = l2.get_data()
	list2.reverse()
	val1 = 0
	val2 = 0
	for digit in list1:
		val1 *= 10
		val1 += digit
	for digit in list2:
		val2 *= 10
		val2 += digit
	sumnumbers = val1 + val2
	listsum = list(str(sumnumbers))
	result = ListNode(int(listsum[-1]))
	listsum = listsum[:-1]
	listsum.reverse()
	listsum = [int(char) for char in listsum]
	result.add_data(listsum)
	# print(sumnumbers) ---- Debugging
	# print(val1)
	# print(val2)
	return result