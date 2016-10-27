DEFINE1 = "Grace_kid.py"
DEFINE2 = "Com"
DEFINE3 = 'DEFINE1 = "%s"\nDEFINE2 = "%s"\nDEFINE3 = %r\n\n"""\n\t%s\n"""\n\nfile = open(DEFINE1, \'w\')\nfile.write(DEFINE3 %% (DEFINE1, DEFINE2, DEFINE3, DEFINE2))\nfile.close()\n'

"""
	Com
"""

file = open(DEFINE1, 'w')
file.write(DEFINE3 % (DEFINE1, DEFINE2, DEFINE3, DEFINE2))
file.close()
