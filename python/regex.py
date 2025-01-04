# https://edabit.com/challenge/XhyPkjEDQ3Mz5AFaH

import unittest
import re
def is_match(s, p):
	result = re.fullmatch(p, s)
	if result is None:
		return False
	return True

class TestIsMatch(unittest.TestCase):
    def test_cases(self):
        self.assertEqual(is_match("aa", "a"), False)
        self.assertEqual(is_match("aa", "a*"), True)
        self.assertEqual(is_match("ab", ".*"), True)

if __name__ == "__main__":
    unittest.main()