# edabit: expert
# https://edabit.com/challenge/RB6iWFrCd6rXWH3vi
def longest_substring(digits):
	result = ""
	subholder = ""
	last_odd = False
	for char in digits: 
		if not subholder:
			subholder+= char
			last_odd = int(char) % 2 == 1
		elif (int(char) % 2 == 1) != last_odd:
			subholder += char
			last_odd = not last_odd
		else:
			if len(subholder) > len(result):
				result = subholder
			subholder = char
			last_odd = int(char) % 2
	if len(subholder) > len(result):
		result = subholder
	return result

# testing
print(longest_substring("844929328912985315632725682153")) # "56327256"
print(longest_substring("769697538272129475593767931733")) # "27212947"
print(longest_substring("937948289456111258444958189244")) # "894561"
print(longest_substring("736237766362158694825822899262")) # "636"
print(longest_substring("369715978955362655737322836233")) # "369"
print(longest_substring("345724969853525333273796592356")) # "496985"
print(longest_substring("548915548581127334254139969136")) # "8581"
print(longest_substring("417922164857852157775176959188")) # "78521"
print(longest_substring("251346385699223913113161144327")) # "638569"
print(longest_substring("483563951878576456268539849244")) # "18785"
print(longest_substring("853667717122615664748443484823")) # "474"
print(longest_substring("398785511683322662883368457392")) # "98785"
print(longest_substring("368293545763611759335443678239")) # "76361"
print(longest_substring("775195358448494712934755311372")) # "4947"
print(longest_substring("646113733929969155976523363762")) # "76523"
print(longest_substring("575337321726324966478369152265")) # "478369"
print(longest_substring("754388489999793138912431545258")) # "545258"
print(longest_substring("198644286258141856918653955964")) # "2581418569"
print(longest_substring("643349187319779695864213682274")) # "349"
print(longest_substring("919331281193713636178478295857")) # "36361"
print(longest_substring("2846286484444288886666448822244466688822247")) # "47"

# better method:
#def longest_substring(digits):
#    res = digits[0]
#    for i in digits[1:]:
#        if int(i)%2 != int(res[-1])%2:
#            res += i
#        else:
#            res += ' ' + i
#    return max(res.split(), key=len)