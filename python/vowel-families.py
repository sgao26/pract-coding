# edabit: very hard
# https://edabit.com/challenge/uwFHSRewNpmBNvbME

def same_vowel_group(w):
	result = []
	vowels = {'a', 'e', 'i', 'o', 'u'}
	first_word_vowels = vowels.intersection(set(w[0]))
	for word in w:
		if vowels.intersection(set(word)) == first_word_vowels:
			result.append(word)
	return result

# testing
print(same_vowel_group(["hoops", "chuff", "bot", "bottom"])) # ["hoops", "bot", "bottom"])
print(same_vowel_group(["crop", "nomnom", "bolo", "yodeller"])) # ["crop", "nomnom", "bolo"])
print(same_vowel_group(["semantic", "aimless", "beautiful", "meatless icecream"])) # ["semantic", "aimless", "meatless icecream"])
print(same_vowel_group(["many", "carriage", "emit", "apricot", "animal"])) # ["many"])
print(same_vowel_group(["toe", "ocelot", "maniac"])) # ["toe", "ocelot"])
print(same_vowel_group(["a", "apple", "flat", "map", "shark"])) # ["a", "flat", "map", "shark"])
print(same_vowel_group(["a", "aa", "ab", "abc", "aaac", "abe"])) # ["a", "aa", "ab", "abc", "aaac"])