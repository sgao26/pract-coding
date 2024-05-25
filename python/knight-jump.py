# edabit: expert
# https://edabit.com/challenge/mm2fm6ynbR7HQQm9z

def on_board(letter, number):
	if letter >= 'A' and letter <= 'H' and number >= 1 and number <= 8:
		return True
	else:
		return False

def knights_jump(square):
	result = []
	square_letter = square[0]
	square_number = int(square[1])
	moves = [[2,1],[2,-1],[-2,1],[-2,-1],[1,2],[1,-2],[-1,2],[-1,-2]]
	for move in moves:
		test_let = chr(ord(square_letter) + move[0])
		test_num = square_number + move[1]
		if on_board(test_let, test_num):
			possible_move = test_let + str(test_num)
			result.append(possible_move)
			
	return ','.join(sorted(result, key = lambda t: (t[1], t[0])))
		
#testing

print(knights_jump('A1')) # C2,B3
print(knights_jump('H1')) # F2,G3
print(knights_jump('F4')) # E2,G2,D3,H3,D5,H5,E6,G6
print(knights_jump('E5')) # D3,F3,C4,G4,C6,G6,D7,F7
print(knights_jump('A7')) # B5,C6,C8
print(knights_jump('B4')) # A2,C2,D3,D5,A6,C6
print(knights_jump('F3')) # E1,G1,D2,H2,D4,H4,E5,G5
print(knights_jump('C8')) # B6,D6,A7,E7
print(knights_jump('E4')) # D2,F2,C3,G3,C5,G5,D6,F6
print(knights_jump('G1')) # E2,F3,H3
print(knights_jump('G7')) # F5,H5,E6,E8
print(knights_jump('F3')) # E1,G1,D2,H2,D4,H4,E5,G5
print(knights_jump('C8')) # B6,D6,A7,E7
print(knights_jump('B6')) # A4,C4,D5,D7,A8,C8
print(knights_jump('E2')) # C1,G1,C3,G3,D4,F4
print(knights_jump('H5')) # G3,F4,F6,G7
print(knights_jump('D1')) # B2,F2,C3,E3
print(knights_jump('G1')) # E2,F3,H3