# edabit: very hard
# https://edabit.com/challenge/MGALfBAXhXqqdFyqo

def atbash(txt):
	mirror = ""
	for i in txt:
		if i.isupper():
			displace = 90 - ord(i)
			mirror += chr(65 + displace)
		elif i.islower():
			displace = 122 - ord(i)
			mirror += chr(97 + displace)
		else:
			mirror += i
		
	return mirror
			

# testing
print(atbash("abcdefghijklmnopqrstuvwxyz")) # "zyxwvutsrqponmlkjihgfedcba"
print(atbash("ABCDEFGHIJKLMNOPQRSTUVWXYZ")) # "ZYXWVUTSRQPONMLKJIHGFEDCBA")
print(atbash("The word 'atbash' derives from the the first and last 2 letters of the Hebrew alphabet.")) # "Gsv dliw 'zgyzhs' wvirevh uiln gsv gsv urihg zmw ozhg 2 ovggvih lu gsv Svyivd zokszyvg."
print(atbash("Vmxibkgrlm zmw wvxibkgrlm ziv rwvmgrxzo uli gsv Zgyzhs xrksvi.")) # "Encryption and decryption are identical for the Atbash cipher."

# better method
# def atbash(txt):
# 	a = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'
# 	z = 'ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba'
# 	s = ''
# 	for i in txt:
# 		if i in a:
# 			s += z[a.index(i)]
# 		else:
# 			s += i
# 	return s