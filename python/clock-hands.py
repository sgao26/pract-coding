# edabit: very hard
# https://edabit.com/challenge/WFCecGWDJNc7Lspw7

from decimal import Decimal, ROUND_HALF_UP

def clock(time):
	timeVals = []
	read = ""
	for char in time:
		if char is ':':
			timeVals.append(int(read))
			read = ""
		else: 
			read += char
	timeVals.append(int(read))
	hours = timeVals[0]
	mins = timeVals[1]
	seconds = timeVals[2]

	bigHandPos = Decimal(hours * 3600 + mins * 60 + seconds) / 120
	smallHandPos = Decimal(mins * 60 + seconds) / 10
	result = abs((bigHandPos - smallHandPos) % 360)
	result = Decimal(str(result)).quantize(Decimal('0.001'), rounding=ROUND_HALF_UP) 
	
	if result <= 180:
		return float(result)
	else:
		return float(360 - result)
	

# testing
print(clock("12:00:00")) # 0.0
print(clock("12:15:00")) # 82.5
print(clock("12:32:44")) # 179.967
print(clock("03:33:33")) # 94.525
print(clock("01:59:59")) # 60.092

# better method:
#def clock(time):
#  h, m, s = map(int, time.split(":"))
#  a = abs(h * 30 - m * 11/2 - s * 11/120)
#  return round(min(a, 360-a), 3)