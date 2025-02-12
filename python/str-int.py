# https://edabit.com/challenge/pfn6QRn6eiTHEPpSs

def int_to_str(num):
	if num == 0:
		return "0"
	result = ""
	listdig = []
	numholder = num
	if numholder < 10:
		result += chr(ord('0') + numholder)
		return result
	while numholder > 0:
		listdig.append(numholder%10)
		numholder //= 10
	listdig.reverse()
	print(listdig)
	for digit in listdig:
		result += chr(ord('0') + digit)
	return result
def str_to_int(num):
	result = 0
	for digit in num:
		result *= 10
		result += (digit)
	return result

	