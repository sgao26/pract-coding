# https://edabit.com/challenge/fbqmyDjCigbYhWLJa

def split_into_buckets(phrase, n):
	parsed = phrase.split()
	result = []
	bucket = ""
	for each in parsed:
		if len(each) > n:
			return []
		if len(bucket) + len(each) <= n:
			bucket += each + " "
		else:
			result.append(bucket[:-1])
			bucket = each + " "
	result.append(bucket[:-1])
	return result