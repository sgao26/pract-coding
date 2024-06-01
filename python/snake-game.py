#edabit: hard
#https://edabit.com/challenge/Y5Ji2HDnQTX7MxeHt

def snakefill(n):
	times_eaten = 0
	spaces = n*n
	while pow(2,times_eaten+1) <= spaces:
		times_eaten += 1
	return times_eaten


#testing
print(snakefill(3)) # 3
print(snakefill(6)) # 5
print(snakefill(24)) # 9
print(snakefill(8)) # 6
print(snakefill(18)) # 8
print(snakefill(555)) # 18
print(snakefill(2)) # 2
print(snakefill(1)) # 0
print(snakefill(900)) # 19

# better method
#import math
#def snakefill(n):
#	return math.floor(math.log2(n**2))