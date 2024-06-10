# edabit: expert
# https://edabit.com/challenge/ojBNREQrg7EW9ZzYx

def read_numbers(txt):
	money_str = ""
	for char in txt:
		if char == '-':
			return "Invalid Input"
		elif char.isdigit():
			money_str += char
	result = int(money_str)
	if result == 0:
		return "Invalid Input"
	else: 
		return result

def count_eatable_chocolates(total_money, cost_of_one_chocolate):
	money = read_numbers(total_money)
	cost = read_numbers(cost_of_one_chocolate)
	if cost == "Invalid Input" or money == "Invalid Input":
		return "Invalid Input"
	
	chocolates = (money / cost)
	wrappers = chocolates
	while wrappers >= 3:
		wrappers = wrappers / 3
		chocolates += wrappers
	
	return round(chocolates)

#testing
assert count_eatable_chocolates("Arun has 2074$", "One chocolate costs 2$") == 1555, "Test case 1 failed"
assert count_eatable_chocolates("Arun has got 22$", "One chocolate costs 2$") == 16, "Test case 2 failed"
assert count_eatable_chocolates("36$", "3 $") == 17, "Test case 3 failed"
assert count_eatable_chocolates("I have 4 dollars", "1   $") == 5, "Test case 4 failed"
assert count_eatable_chocolates("28$", "2$") == 20, "Test case 5 failed"
assert count_eatable_chocolates("0$", "0$") == "Invalid Input", "Test case 6 failed"
assert count_eatable_chocolates("8$", "-2$") == "Invalid Input", "Test case 7 failed"

print("All tests passed")

# better method:
# from re import findall
# def count_eatable_chocolates(total_str, cost_str):
#     total = int(findall(r'-*\d+', total_str)[0])
#     cost = int(findall(r'-*\d+', cost_str)[0])
#     if total <= 0 or cost <= 0:
#         return 'Invalid Input'
#     count = total // cost
#     res = count
#     while count >= 3:
#         res += count // 3
#         count = count // 3 + count % 3
#     return res