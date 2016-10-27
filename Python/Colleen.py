"""
	Com1
"""

def print_src():
	test = "lol"
	x = '"""\n\tCom1\n"""\n\ndef print_src():\n\ttest = "lol"\n\tx = %r\n\tprint(x %% x)\n\nif __name__ == \'__main__\':\n\t"""\n\t\tCom2\n\t"""\n\tprint_src()'
	print(x % x)

if __name__ == '__main__':
	"""
		Com2
	"""
	print_src()
