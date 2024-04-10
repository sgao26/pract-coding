# edabit: very hard
# https://edabit.com/challenge/vQgmyjcjMoMu9YGGW

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def simplify(txt):
	slashFound = False
	numer = 0
	denom = 0
	numberstr = ""
	for char in txt:
		if char == '/':
			slashFound = True
			numer = int(numberstr)
			numberstr = ""
		else:
			numberstr += char
	denom = int(numberstr)
	divisor = gcd(numer, denom)
	while divisor != 1:
		numer = numer/divisor
		denom = denom/divisor
		divisor = gcd(numer,denom)
	if numer % denom == 0:
		return str(int(numer/denom))
	else:
		return (str(int(numer)) + '/' + str(int(denom)))
	
# testing
print(simplify("5/7")) # "5/7"
print(simplify("4/6")) # "2/3"
print(simplify("11/10")) # "11/10"
print(simplify("8/4")) # "2"
print(simplify("7/4")) # "7/4", 'should work for improper fractions'
print(simplify("6/4")) # "3/2"
print(simplify("300/200")) # "3/2"
print(simplify("50/25")) # "2"
print(simplify("5/45")) # "1/9"

# better method:
#def simplify(txt):
#	a, b = map(int, txt.split('/'))
#	if a % b == 0:
#		return str(a//b)
#	for i in range(min(a, b), 1, -1):
#		if a % i == 0 and b % i == 0:
#			return '{}/{}'.format(a//i, b//i)
#	return txt