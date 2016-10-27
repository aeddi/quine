import os

i = 5
filename = "Sully_%d.py" % (i - 1)
src = 'import os\n\ni = %d\nfilename = "Sully_%%d.py" %% (i - 1)\nsrc = %r\n\nif i:\n\tfile = open(filename, "w")\n\tfile.write(src %% (i - 1, src))\n\tfile.close()\n\n\tos.system("python2 %%s" %% filename)\n'

if i:
	file = open(filename, "w")
	file.write(src % (i - 1, src))
	file.close()

	os.system("python2 %s" % filename)
