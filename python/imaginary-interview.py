# https://edabit.com/challenge/3A3mHS5B3NNZddQL2

import math

def interview(lst, tot):
	if tot > 120:
		return "disqualified"
	questions = len(lst)
	if questions < 8:
		return "disqualified"
	for i in range(questions):
		limit = (i + 1.0) / 2.0
		if lst[i] > (math.ceil(limit) * 5):
			return "disqualified"
	return "qualified"