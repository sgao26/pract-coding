# edabit: hard
# https://edabit.com/challenge/5bYXQfpyoithnQisa

import unittest

def encode_morse(message):
	char_to_dots = {
		'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.',
		'G': '--.', 'H': '....', 'I': '..', 'J': '.---', 'K': '-.-', 'L': '.-..',
		'M': '--', 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R': '.-.',
		'S': '...', 'T': '-', 'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-',
		'Y': '-.--', 'Z': '--..', ' ': ' ', '0': '-----',
		'1': '.----', '2': '..---', '3': '...--', '4': '....-', '5': '.....',
		'6': '-....', '7': '--...', '8': '---..', '9': '----.',
		'&': '.-...', "'": '.----.', '@': '.--.-.', ')': '-.--.-', '(': '-.--.',
		':': '---...', ',': '--..--', '=': '-...-', '!': '-.-.--', '.': '.-.-.-',
		'-': '-....-', '+': '.-.-.', '"': '.-..-.', '?': '..--..', '/': '-..-.'
	}	
	result = []
	for chr in message.upper():
		result.append(char_to_dots[chr])

	return ' '.join(result)

# tests
class TestMorseCode(unittest.TestCase):

    def test_simple_word(self):
        self.assertEqual(encode_morse("SOS"), "... --- ...")

    def test_sentence_with_spaces(self):
        self.assertEqual(encode_morse("HELLO WORLD"), ".... . .-.. .-.. ---   .-- --- .-. .-.. -..")

    def test_lowercase_input(self):
        self.assertEqual(encode_morse("hello"), ".... . .-.. .-.. ---")

    def test_mixed_case_input(self):
        self.assertEqual(encode_morse("HeLLo WoRLd"), ".... . .-.. .-.. ---   .-- --- .-. .-.. -..")

    def test_numbers(self):
        self.assertEqual(encode_morse("123"), ".---- ..--- ...--")

    def test_empty_string(self):
        self.assertEqual(encode_morse(""), "")

if __name__ == '__main__':
    unittest.main()